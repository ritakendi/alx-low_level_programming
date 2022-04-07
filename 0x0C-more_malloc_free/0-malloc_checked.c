#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: integer value.
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int*)malloc(b * sizeof(int));

	if (ptr = NULL)
		return (98);
}
