#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if okay, 1 if error input
 */

int main(int argc, char *argv[])
{
	if (arg != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) *atoi(argv[2]));
		return (0);
	}
}
