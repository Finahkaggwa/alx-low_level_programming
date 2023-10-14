#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
}
