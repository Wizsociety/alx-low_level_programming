#include "main.h"
/**
 * @isupper:it checks for upper case
 * @c: this it the argmument in char
 * return int  and accept command line args
 */
int _isupper(int c)
{
	if(c >='A'&& c <= 'Z')
		return(1);
	else
		return(0);
}
