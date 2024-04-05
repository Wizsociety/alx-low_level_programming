#include "main.h"

/**
 * Prints the last digit of a number
 * @n: The number of last digit
 *
 * Return, The value of the last digit
 */
int print_last_digit(int n)
{
	int lstd;

	if (n < 0)
		n = -n;
	lstd = n % 2;
	_putchar('0' + lstd);
	return (lstd);
}
