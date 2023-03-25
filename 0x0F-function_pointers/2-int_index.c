#include "function_pointers.h"

/**
 * int_index - return index place if comparison is true, els -1
 * @array: array
 * @size: size of array elements
 * @cmp: ponter to function to be used to compare
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
