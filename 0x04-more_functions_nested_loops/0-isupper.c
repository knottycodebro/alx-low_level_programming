#include "main.h"
#include "stdio.h"

/**
 * _isupper - Entry point
 *
 * @c: takes alphabet as an input
 *
 * Return: Always 1 (success)
 */

int _isupper(int c)
{
	if (c >= "A" && c <= "Z")
		return (1);
	else
		return (0);
}
