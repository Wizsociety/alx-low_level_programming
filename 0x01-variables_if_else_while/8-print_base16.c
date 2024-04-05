#include <stdio.h>
/**
 * main is the entry point
 *
 * use putchar to output
 *
 * return 0
 */

int main(void)
{
	int i= 0;
	while (i < 16) {
		if(i < 10) {
			i++;
			putchar('0' + i);
		} else {
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');

	return 0;
}

