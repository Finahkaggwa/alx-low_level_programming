#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: parameter for destination string
 * @src: parameter for input string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int h = 0;
	int y = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		h++;
	for (i = 0; src[i] != '\0'; i++)
		y++;

	for (i = 0; i <= y; i++)
		dest[h + i] = src[i];
	return (dest);
}
