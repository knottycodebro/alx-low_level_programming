#include "main.h"

/**
 * _islower - func that checks if an alpha is lowercase
 *
 * Description: lowercase checker
 *
 * @c: c is an ascii character
 *
 * Return: Always 1 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
