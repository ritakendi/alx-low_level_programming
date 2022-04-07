#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: number of bytes
 *
 * Return: newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string3;
	unsigned int ls1, ls2, lsout, i;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for  (ls1 = 0; s1[ls1] ! = '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; s2++)
		;

	if (n > ls2)
		n = ls2;
	
	lsout = ls1 + n;

	string3 = malloc(lsout + 1);

	if (string3 == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			string3[i] = s1[i];
		else
			string3[i] = s2[i - ls1];

	string3[i] = '\0';
	
	return (string3);
}
