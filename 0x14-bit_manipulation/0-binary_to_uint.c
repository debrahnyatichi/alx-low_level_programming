#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: points to a string of 0 and 1 chars.
 * Return: number converted
 *         otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		result = 2 * result + (b[c] - '0');
	}
	return (result);
}
