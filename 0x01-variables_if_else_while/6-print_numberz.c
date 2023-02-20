#include <stdio.h>

/**
 * main - main function is void
 *
 * Return: 0 when successful
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
