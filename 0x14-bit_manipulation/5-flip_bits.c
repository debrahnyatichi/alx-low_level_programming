#include "main.h"

/**
 * flip_bits - function to return no. of bits you need to chabge.
 * @n:value to be changed
 * @m: value to be changed
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits;

	for (num_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((j & 1) != (k & 1))
			num_bits++;
	}

	return (num_bits);
}

