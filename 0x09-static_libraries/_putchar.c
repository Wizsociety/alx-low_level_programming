#include <unistd.h>
/**
 * _putchar - writes the chars
 * @c: The character to print
 * return 1 on success
 * error on -1
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
