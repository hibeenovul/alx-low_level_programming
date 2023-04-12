#include "main.h"
#include <stdio.h>
/**
 * error_file - function to check error in file
 * @file_from: where the file will be copied from
 * @file_to: where the file will be copied to
 * @argv: arguments vector
 * Return: no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
}
