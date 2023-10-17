#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: function parameter
 * Return: results
 */

void puts2(char *str)
{
	int i = 0;
	int t = 0;
	char *y = str;
	int h;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	t = i - 1;
	for (h = 0; h <= t; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
