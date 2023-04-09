#include "main.h"

/**
 * binary_to_uint - funtion to convert binary to unit
 * @b: denotes binary
 * Return: return converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	int l, n;

	if (!b)
		return (0);
	j = 0;
	for (l = 0; b[l] != '\0'; l++)
		;
	for (l --, n = 1; l >= 0; l--, n *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}
		if (b[l] & 1)
		{
			j += n;
		}
	}
	return (j);
}
