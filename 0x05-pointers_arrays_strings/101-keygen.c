#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * create random passwords
 * description : srand and rand
 * Return o
 */

int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
