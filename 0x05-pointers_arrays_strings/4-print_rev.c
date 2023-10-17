#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: parameter for string
 * return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int y;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (y = i; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
