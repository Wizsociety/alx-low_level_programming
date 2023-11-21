#include "main.h"
/**
 * @strcat: this function concatenates 'joining'
 * *dest is a pointer to the input
 * *src is a pointer to the input
 * return char or void
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a=0;
	while(dest[a]!='\0')
	{
		a++;
	}
	b=0;
	while(src[b]!='\0')
	{
		dest[a]=src[b];
		a++;
		b++;
	}
	dest[a]='\0';
	return(dest);
}
