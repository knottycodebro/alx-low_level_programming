#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print n to 98
 *
 * @n: accepts integer input
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = 0; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = 0; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
