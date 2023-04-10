#include "main.h"

/**
 * get_endianness - function to check the endianness
 * Return: 0 big endian and 1 for little endian
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *f = (char *) &a;

	return (*f);
}
