#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * main - function to create a string
 * Return: on success 1
 * on error, -1 is returned and the errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
