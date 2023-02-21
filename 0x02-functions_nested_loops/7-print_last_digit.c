#include "main.h"

/**
 * print_last_digit - function to  print last digit
 * @i: parameter to print the last digit
 * Return: 0 when sucessful
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
