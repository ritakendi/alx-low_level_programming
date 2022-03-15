#include "main.h"
/**
 * _sign - prints the sign of a number.
 *
 * @n: ASCII code character.
 *
 * Return: if greater than 0 returns 1. if 0 returns 0. if less than 0, -1.
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else 
	{
		_putchar(48);
		return (-1);
	}
	_putchar('\n');
}
