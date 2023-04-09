#include "main.h"

/**
 * print_binary - functions that prints binary representation of a number
 * @n: decimal passed for convertion
 * Return: Always 0
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(j >> 1);
		_putchar((j & 1) + '0');
	}
	else
		_putchar (0);
}
