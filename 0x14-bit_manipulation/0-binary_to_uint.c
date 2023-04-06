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
	if (b == NULL)
	{/* handle null pointer */
		return (0);
	}

	unsigned int result = 0;

	for (const char *p = b; *p != '\0'; p++)
	{
		if (*p == '0')
		{
			result << = 1;
		}
		else if (*p == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
