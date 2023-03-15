#include <stdio.h>
#include "main.h"

/**
 * main  - a function that prints it's name
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
