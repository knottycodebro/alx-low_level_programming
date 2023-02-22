#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
		for (min = 0; min < 59; min++)
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min / 10) + 48);
			_putchar('\n');
}
