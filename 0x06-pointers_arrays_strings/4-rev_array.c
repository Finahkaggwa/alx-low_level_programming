#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: parameter for the array
 * @n: parameter for number of array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int y;

	for (i = 0; i < n--; i++)
	{
		y = a[i];
		a[i] = a[n];
		a[n] = y;
	}
}
