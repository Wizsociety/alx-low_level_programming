#include "main.h"

/**
 * _memset - function of prog
 * @s: pointed destination
 * @b: constant byte
 * @n: byte
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
