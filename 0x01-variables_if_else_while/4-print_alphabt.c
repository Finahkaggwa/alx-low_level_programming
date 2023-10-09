#include <stdio.h>
/**
 * main - It's the main function
 * Return:0 should be the expected output
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
