#include "main.h"
/**
 * swap_int - function that swaps values of two integers
 * @a: function parameter
 * @b: function parameter
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
