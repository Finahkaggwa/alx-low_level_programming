#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: parameter for input  integer
 * Return: 0 (successful)
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
