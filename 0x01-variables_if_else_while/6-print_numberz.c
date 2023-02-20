#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
