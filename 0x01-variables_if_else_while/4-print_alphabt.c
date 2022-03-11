#include <stdio.h>
#include <stdli.h>
#include <string.h>
/**
 * main - prints the alphabets without q and e.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
		putchar(i);
		}
	}
	putchar('\n');
		return (0);
}
