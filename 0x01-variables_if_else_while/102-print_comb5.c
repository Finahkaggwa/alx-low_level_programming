#include <stdio.h>
/**
 * main - function to print combinations of two two-digit numbers
 * Return:0 (success), should always be
 */

int main(void)
{
	int i, y;

	for (i = 0; i < 100; i++)
	{
		for (y = 0; y < 100; y++)
		{
			if (i < y)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (i != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
putchar('\n');
return (0);
}
