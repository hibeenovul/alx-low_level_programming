#include "main.h"

/**
 * positive_or_negative - the main function
 * @i: number to check
 * Return: 0 when successful
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
