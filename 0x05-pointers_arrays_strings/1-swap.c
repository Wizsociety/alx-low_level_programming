#include "main.h"

/**
 * swap_int - swaps the values of a and b
 * @a - pointer 1
 * @b - pointer 2
 * Return void
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
