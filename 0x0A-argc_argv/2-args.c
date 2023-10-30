#include <stdio.h>
/**
 * main - function that prints all arguments it receives
 * @argc: parameter for argument count
 * @argv: parameter for argument vector
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
