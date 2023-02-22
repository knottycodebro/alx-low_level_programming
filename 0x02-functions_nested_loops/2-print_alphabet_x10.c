#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints the alphabet 10x with _putchar function
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int times = 10, i;
	char alpha = 'a';

	/*I'm using for loop together with while loop for this task😃😉*/
	for (i = 0; i < times; i++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
