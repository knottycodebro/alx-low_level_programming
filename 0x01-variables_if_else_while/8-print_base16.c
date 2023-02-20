#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints base16 with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphanum = 48;

	while (alphanum < 103)
	{
		putchar(alphanum);
		if (alphanum == 57)
		{
			alphanum += 39;
		}
		alphanum++;
	}
	putchar('\n');
	return (0);
}
