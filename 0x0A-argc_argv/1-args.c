#include <stdio.h>
/**
 * main - prints thenumber of arguments
 * @argc: counts the number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
