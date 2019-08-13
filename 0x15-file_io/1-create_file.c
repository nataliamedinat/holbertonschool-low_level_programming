#include "holberton.h"
/**
 * create_file - function that creates a file
 *@filename: name of the file to create
 *@text_content: null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size; /*size bytes*/
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1) /*if fails*/
		return (-1);

		if (text_content != NULL)
		{
			while (text_content[len]!= '\0')
			{
			len++;
			}

			size = write(fd, text_content, len);
			if (size == -1) /* if fails*/
			{

				write(STDOUT_FILENO, "fails", 6); /* 6 size total*/
				return (-1);
			}
		}
		close(fd);
		return (1);
}

