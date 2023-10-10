#include <stdio.h>
/**
 * main - the main function
 * Return:0,ought to always be
 */

int main(void)
{
	int i = '0';
	int y = '0';

	for (y = '0'; y <= '9'; y++)
	{
		for (i = '0'; i <= '9'; i++)
			if (!((i == y) || (y > i)))
			{
				putchar(y);
				putchar(i);
				if (!(i == '9' && y == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
	}

putchar('\n');
return (0);
}
