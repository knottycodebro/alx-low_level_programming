#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";
	int num = 0;

	for (num = 0; num < 8; num++)
		_putchar(word[num]);
	_putchar('\n');

	return (0);
}
