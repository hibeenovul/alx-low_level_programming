#include "main.h"

/**
 * get_bit - function that get bit
 * @n: unsigned long int
 * @index: index of bit
 * Return: value of bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (n == 0 && index < 64)
		return (0);
	for (j = 0; j <= 63; n >>= 1, j++)
	{
		if (index == j)
		{
			return (n & 1);
		}
	}
	return (-1);
}
