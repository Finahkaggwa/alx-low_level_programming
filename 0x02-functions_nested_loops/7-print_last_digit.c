#include "main.h"
/**
 * print_last_digit - function prints last digit of number
 * @i: it's a parameter
 * Return: y
 */

int print_last_digit(int i)
{
	int y;

	y = i % 10;
	if (i < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
