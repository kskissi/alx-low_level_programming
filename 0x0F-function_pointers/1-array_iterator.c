#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new line
 * @array: the array to iterate over
 * @size: the number of elements to print
 * @action: pointer to the function used to print
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

