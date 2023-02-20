#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha = 122;

	while (alpha > 96)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
