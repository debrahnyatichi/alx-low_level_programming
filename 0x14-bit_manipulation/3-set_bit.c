#include "main.h"

/**
 * set_bit - function that sets the value of a bit  to 1 at a given index
 * @n: pointer to a decimal being passed in
 *@index: binary position to be modified
 *Return: 1 if success and -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int fent = 0;

	if (index > 63)
		return (-1);

	fent = 1 << index;
	*n = *n | fent;
	return (1);
}
