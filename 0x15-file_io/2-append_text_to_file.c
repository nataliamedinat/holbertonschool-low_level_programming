#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 *@filename: name of the file
 *@text_content: null terminated string to add at the end of the  file
 * Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, size, len;/*bytes*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY, 0600);

	if (fd == -1) /*if fails*/
		return (-1);

		if (text_content != NULL)
		{
			for (len = 0; text_content[len] != '\0'; len++)
			;

			size = write(fd, text_content, len);

			if (size == -1) /*if fails*/
			{
				return (-1);
			}
		}
		close(fd);
		return (1);

}

