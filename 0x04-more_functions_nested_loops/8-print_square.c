#include "main.h"
/**
 * print_square - prints a square
 * @size: parameter for size of the square
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, y;

		for (i = 1; i <= size; i++)
		{
			for (y = 1; y <= size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
