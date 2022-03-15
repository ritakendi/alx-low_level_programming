#include "main.h"
/**
 * _abs - computes absolute value of an integer.
 *
 * @n: integer value of a number
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
