#include "main.h"
#include <unistd.h>
/**
 * _putchar - weites the character c to stdout
 * @c the character to print
 *
 * Return on success 1
 * 0n error, -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
