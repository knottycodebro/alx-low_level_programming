#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
		alpha++
	}
	putchar('\n');

	return (0);
}
