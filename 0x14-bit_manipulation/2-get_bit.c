#include "main.h"

/**
 * get_bit - returns value of a bit at a given index.
 * @index: index starting from 0 of the bit you want.
 * @n: unsigned long integer input.
 *
 * Return: value of the bit at index or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
