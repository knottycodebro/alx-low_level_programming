#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: takes an integer type as an input
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else if (n > 0)
		return (n);
	else
		return (n);
}
