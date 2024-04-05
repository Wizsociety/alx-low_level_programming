#include "main.h"

/**
 * Print every minute of the day of Jack Bauer
 * Description should  Start from 00:00 to 23:59
 * return void
 */

void jack_bauer(void)
{
	int hrs, min;

	for (hrs= 0; hrs < 24; hrs++) {
		for (min = 0; min < 60; min++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}
