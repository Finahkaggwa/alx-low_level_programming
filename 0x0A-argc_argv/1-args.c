#include <stdio.h>
/**
 * main - function that prints number of arguments
 * @argc: parameter for argument count
 * @argv: parameter for argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
