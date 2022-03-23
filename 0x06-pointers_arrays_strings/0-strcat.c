#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings.
 * @src: source.
 * @dest: destination.
 * Return: the point to dest
 */
char *_strcat(char *dest, char *src)
{
	char dest[] = "Hello ";
	char src[] = "World";

	strcat(dest, src);
}
