#include "main.h"
/**
 *
 * Return: Apointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index -1] == ' ' ||
		   

		       	
