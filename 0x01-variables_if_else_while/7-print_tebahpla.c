#include <stdio.h>
/**
 * main - the main function
 * Return:0, should always be the return
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
