#include <stdio.h>

/**
 * main - main function is void
 * @i - variable 1
 * @sum - variable 2
 * Return: 0 always
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 3 ; i < 10 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
