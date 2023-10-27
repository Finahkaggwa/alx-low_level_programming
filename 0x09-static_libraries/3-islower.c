#include "main.h"
/**
 * _islower - function checks for lowercase character
 * @c: this parameter to be checked
 * Return:1, only if c is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
