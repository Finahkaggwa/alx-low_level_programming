#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: parameter for name to be printed
 * @f: parameter for function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
