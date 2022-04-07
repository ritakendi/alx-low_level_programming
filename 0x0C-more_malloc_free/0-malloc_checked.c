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
	char *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
