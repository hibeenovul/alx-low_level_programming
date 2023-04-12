#include "main.h"
#include <stdio.h>

/**
 * main - function to check for code
 * @argc: int number of argument
 * @argv: number of vector argument
 * Return: return 0 when successful
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t ch, wr;
	char bf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	ch = 1024;
	while (ch == 1024)
	{
		ch = read(file_from, bf, 1024);
		if (ch == -1)
			error_file(-1, 0, argv);
		wr = write(file_to, bf, ch);
		if (wr == -1)
			error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
