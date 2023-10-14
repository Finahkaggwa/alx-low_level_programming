#include "main.h"
/**
 * print_triangle - prints a triangle using #
 * @size: parameter for triangle size
 * Return: void
 */

void print_triangle(int size)
{
	int i, y;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (y = size - i; y > 0; y--)
			{
				_putchar(' ');
			}
			for (y = 0; y < i; y++)
			{
				_putchar('#');
			}
			if (i == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
