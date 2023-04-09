#include "main.h"

/**
 * get_bit - function that returns the vallue of a bit at a given index
 * @n: number to be searched
 * @index: bit index
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;

	return (bit_value);
}
