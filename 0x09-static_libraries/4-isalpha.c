#include "main.h"
/**
 * _isalpha - function checks for alphabets
 * @c: parameter to be checked
 * Return: 1 if lower or uppercase, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
