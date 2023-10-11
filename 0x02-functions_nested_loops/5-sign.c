#include "main.h"

/**
 * print_sign - function to print sign of a number
 * @n: parameter to be checked
 * Return:1, 0 or -1 as  per conditions
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
	return (-1);
	}
}
