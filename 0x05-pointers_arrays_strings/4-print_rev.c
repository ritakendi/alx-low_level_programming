#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int counter = 0;

	while (counter >= 0)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}

	for (counter--; counter >= 0; counter--)
		_putchar(s[counter]);
	_putchar('\n');
}
