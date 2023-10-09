#include <stdio.h>
/**
 * main - It's the main function
 * Return:0, should always be 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
