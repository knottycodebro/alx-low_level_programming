#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the alphabets with _putchar function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha < 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
