#include "main.h"

/**
 * create_file - Function that create a file, set its permissions to rw-------,
 * write text content to it, and return status codes as specified.
 *
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: (1) on success. (-1) on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write_bytes = write(fd, text_content, strlen(text_content));
		if (write_bytes == -1 || (size_t)write_bytes != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
