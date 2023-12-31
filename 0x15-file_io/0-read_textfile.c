#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * read_textfile - reads a text file and prints it to the POSIX stdo
 * @filename: parameter for name of the file to read
 * @letters: parameter for number of letters it should read and print
 * Return: actual number of letters it could read and return
=======
 * read_textfile - Reads a text file and prints it to the POSIX stdo
 * @filename: parameter for name of the file to read
 * @letters: parameter for number of letters it should read and print
 * Return: actual number of letters it could read and print
>>>>>>> 8cd4b843472f4a81c3f511de4afabff1eac00710
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	lenr = read(file_d, buffer, letters);
	close(file_d);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
