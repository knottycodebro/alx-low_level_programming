#include "main.h"

/**
 * _isalpha - alphabet checker
 *
 * @c: c is an ascii character
 *
 * Return: Always 1 (success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
		return (1);
	return (0);
}
