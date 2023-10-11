#include "main.h"
/**
 * print_alphabet_x10 - it prints alphabet in lowercase 10x
 * Return:0, should always be
 */

void print_alphabet_x10(void)
{
	int i;
	char y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
