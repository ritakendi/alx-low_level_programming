#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 * performing functions that have been pointed to
 * @array: the array
 * @size: array size
 * @action: pointer to the function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
