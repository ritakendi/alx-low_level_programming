#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	1 = n % 10;
	if (1 > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, 1);
	}
		else if (1 == 0)
		{
			printf("last digit of %d is %d and is 0\n", n, 1);
		}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n, n, 1);
	}
	return (0);
}

