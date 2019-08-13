#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it
 *@letters: number of letters it should be read and print
 *@filename: file
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer; /*reserva memoria*/
	int _strlen;

	fd = open(filename, O_RDONLY);

	if (fd == -1) /*if fails*/
		return (0);

		buffer = malloc(sizeof(char) * letters);

		if (buffer == 0) /*check that the memory is reserved*/
			return (0);

		_strlen = read(fd, buffer, letters);

		if (write(STDOUT_FILENO, buffer, _strlen) != _strlen)
			return (0);

			free(buffer);
			close(fd);

			return (_strlen);








}

