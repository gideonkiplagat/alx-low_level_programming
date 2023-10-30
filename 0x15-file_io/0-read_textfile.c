#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX.
 * @filename: The name of the file to be read
 * @letters: The number of letters to read and print
 * Return: The actual number of letters read and printed, or 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, bytes_read;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY, 0600);
	if (file_descriptor == -1)
		return (0);

	bytes_read = read(file_descriptor, buffer, letters);
	write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_read);
}
