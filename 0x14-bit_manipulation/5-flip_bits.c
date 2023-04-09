#include "main.h"

/**
 * flip_bits - function to return no. of bits you need to chabge.
 * @n:value to be changed
 * @m: value to be changed
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_num;

	for (bits_num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((j & 1) != (k & 1))
			bits_num++;
	}

	return (bits_num);
}

