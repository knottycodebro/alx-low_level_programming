#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the alphabet with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha = 97;

	while (alpha < 123)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
