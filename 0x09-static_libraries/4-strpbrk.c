#include "main.h"
/**
 * _strpbrk - function that seraches a string for any set of bytes
 * @s: function parameter
 * @accept: function parameter
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

