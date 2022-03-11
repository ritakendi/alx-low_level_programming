#include <stdio.h>
/**
 * main - prints numbers between 00 to 99.
 *
 * Return: Always 0 (successs)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++;
	}
	putchar('\');
	return (0);
}
