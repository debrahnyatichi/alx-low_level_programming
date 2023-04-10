#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @n: number to be searched
 * @index: the input index
 * Return: 1 if success and -1 if error
 */

int clear_bit(unsigned long int *n, int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
