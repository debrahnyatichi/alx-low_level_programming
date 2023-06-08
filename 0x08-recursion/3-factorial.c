#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number that returns the factorial
 *
 * Return: -1 IF N<0 OR 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

