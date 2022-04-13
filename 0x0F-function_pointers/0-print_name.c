#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - calls back to a function
 * @name: name of person
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
