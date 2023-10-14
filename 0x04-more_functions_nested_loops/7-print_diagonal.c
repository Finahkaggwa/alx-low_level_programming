#includee "main.h"
/**
 * print_diagonal - prints diagonal line in the terminal
 * @n: function parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar(''\n');
		}
	}
}
