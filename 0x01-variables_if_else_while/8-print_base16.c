#include <stdio.h>
/**
 * main - it's the main function
 * Return:0,should always be
 */

int main(void)
{
	int i;
	char y;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
