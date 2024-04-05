#include "main.h"

/**
 * _isdigit - Check for digits (0 to 9)
 * @c: int type parameters
 * Return: 1 for digit, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
