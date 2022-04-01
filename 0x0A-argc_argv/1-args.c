#include <stdio.h>
/**
 * main - prints the number of arguments passed.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
