#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: source.
 * @dest: destination.
 * Return: the point to dest
 */
char *_strcat(char *dest, char *src)
{
	int ch1 = 0, ch = 0;

	while (*(dest + ch1) != '\0')
	{
		ch++;
	}

	while (ch2 >= 0)
	{
		*(dest + ch1) = *(src + ch2);
		if (*(src + ch2) == '\0')
			break;
		ch1++;
		ch2++;
	}
	return (dest);
}
