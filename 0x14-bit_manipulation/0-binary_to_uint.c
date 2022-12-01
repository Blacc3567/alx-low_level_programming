#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 * Return: 0;
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		c = 2 * c + (b[i] - '0');
	}
	return (c);
}
