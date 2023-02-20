#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints upper and lower case alphabet with putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int upper = 65;
	int lower = 97;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}
	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
