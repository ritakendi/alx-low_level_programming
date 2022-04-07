#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 *
 * Return: newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string3;
	unsigned int i, j, lsout;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for  ( s1 = 0; ! = '\0'; s1++)
		;
	for (s2 = 0; != '\0'; s2++)
		;

	if (n > s2)
		n = s2;
	
	lsout = s1 + n;

	string3 = malloc(lsout + 1);

	if (string3 == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < s1)
			string3[i] = s2[i - s1];

	string3[i] = '\0';
	
	return (string3);
}
