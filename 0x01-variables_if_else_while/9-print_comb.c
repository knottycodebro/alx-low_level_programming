#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print 0-9 separated by comma and a space with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
