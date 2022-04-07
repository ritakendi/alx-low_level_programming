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
	ptr = malloc(int b);

	ptr = (int*)malloc(b * sizeof(int));
	ptr == NULL;
	exit(98);
	return (b);
}
