#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_addr - function that prints address
 * @ptr: pointer
 * Return: 0 always
 */
void print_addr(char *ptr)
{
	int j;
	int jl;
	char s;

	printf("  Entry point address:               0x");

	s = ptr[4] + '0';
	if (s == '1')
	{
		jl = 26;
		printf("80");
		for (j = jl; j >= 22; j--)
		{
			if (ptr[j] > 0)
				printf("%x", ptr[j]);
			else if (ptr[j] < 0)
				printf("%x", 256 + ptr[j]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (s == '2')
	{
		jl = 26;
		for (j = jl; j > 23; j--)
		{
			if (ptr[j] >= 0)
				printf("%02x", ptr[j]);

			else if (ptr[j] < 0)
				printf("%02x", 256 + ptr[j]);

		}
	}
	printf("\n");
}

/**
 * print_type - function that prints type
 * @ptr: pointer
 * Return: 0 always
 */
void print_type(char *ptr)
{
	char t = ptr[16];

	if (ptr[5] == 1)
		t = ptr[16];
	else
		t = ptr[17];

	printf("  Type:                              ");
	if (t == 0)
		printf("NONE (No file type)\n");
	else if (t == 1)
		printf("REL (Relocatable file)\n");
	else if (t == 2)
		printf("EXEC (Executable file)\n");
	else if (t == 3)
		printf("DYN (Shared object file)\n");
	else if (t == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", t);
}

/**
 * print_osabi - function that prints osabi
 * @ptr: pointer
 * Return: 0 always
 */
void print_osabi(char *ptr)
{
	char os = ptr[7];

	printf("  OS/ABI:                            ");
	if (os == 0)
		printf("UNIX - System V\n");
	else if (os == 2)
		printf("UNIX - NetBSD\n");
	else if (os == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", os);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * print_version - function that prints version
 * @ptr: pointer
 * Return: 0 always
 */
void print_version(char *ptr)
{
	int v = ptr[6];

	printf("  Version:                           %d", v);

	if (v == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - function that prints data
 * @ptr: pointer
 * Return: 0 always
 */
void print_data(char *ptr)
{
	char d = ptr[5];

	printf("  Data:                              2's complement");
	if (d == 1)
		printf(", little endian\n");

	if (d == 2)
		printf(", big endian\n");
}
/**
 * print_magic - function that prints magic info.
 * @ptr: pointer
 * Return: 0 always
 */
void print_magic(char *ptr)
{
	int byt;

	printf("  Magic:  ");
	for (byt = 0; byt < 16; byt++)
		printf(" %02x", ptr[byt]);
	printf("\n");
}

/**
 * check_sys - function that check the version system.
 * @ptr: pointer
 * Return: 0 always
 */
void check_sys(char *ptr)
{
	char sy = ptr[4] + '0';

	if (sy == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (sy == '1')
		printf("  Class:                             ELF32\n");
	if (sy == '2')
		printf("  Class:                             ELF64\n");
	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_addr(ptr);
}

/**
 * check_elf - function that check if it is an elf file.
 * @ptr: pointer
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *ptr)
{
	int a = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (a == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);
	return (0);
}

/**
 * main - function that check the code 
 * @argc: number of arguments.
 * @argv: number of vector argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, rt_rd;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	rt_rd = read(fd, ptr, 27);
	if (rt_rd == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	check_sys(ptr);
	close(fd);

	return (0);
}
