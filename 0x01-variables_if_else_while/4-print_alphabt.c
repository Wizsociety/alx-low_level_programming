#include<stdio.h>

/**
 * main - Entry point
 *
 * print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char letters = 'a';

	while (letters <= 'z'){
		if (letters == 'e' || letters == 'q')
			letters++;
		putchar(letters);
		letters;
	}
	putchar('\n');

	return (0);
}
