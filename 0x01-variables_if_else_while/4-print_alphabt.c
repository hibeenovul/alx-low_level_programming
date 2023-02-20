#include <stdio.h>

/**
 * main - main function is void
 *
 * Return: 0 when successsful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
