#include "main.h"

/**
 * _puts - func that print a string to stdout
 * @str: char array
 * Return nothing 
 * Description: Can only use _putchar
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
