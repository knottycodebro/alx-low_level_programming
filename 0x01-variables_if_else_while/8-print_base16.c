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

	while (alphanum < 102)
	{
		putchar(alphanum);
		if (alphanum == 58)
		{
			alphanum += 39;
		}
		alphanum++;
	}
	putchar('\n');
	return (0);
}
