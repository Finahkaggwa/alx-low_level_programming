#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: parameter for destination string
 * @src: parameter for input string
 * @n: parameter for bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[y + i] = *src;
		src++;
	}
	dest[y + i] = '\0';
	return (dest);
}
