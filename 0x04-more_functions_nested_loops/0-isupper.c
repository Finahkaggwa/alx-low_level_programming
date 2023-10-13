#include "main.h"
/**
 * _isupper - function checking for uppercase character
 * @c: function parameter
 * Return:1 if uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
