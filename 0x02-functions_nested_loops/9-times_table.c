#include "main.h"
#include <stdio.h>
/**
 * times_table - function that prints 9 times table
 * Return:void
 */

void times_table(void)
{
	int i, y, result;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 10; y++)
		{
			result = i * y;
			if (y == 0)
				printf("%d, ", result);
			else
			{
				printf("%2d", result);
				if (y != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
