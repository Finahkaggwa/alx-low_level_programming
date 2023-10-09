#include <stdio.h>
/**
 * main - The main function
 * Return:0, this should always be the output
 */

int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
		putchar(y);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
