#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: the character in ASCII code.
 *
 * Return: 1 if c is a letter, lowercase or uppercase. returns 0 otherwise
 */

int _islower(int c);
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
