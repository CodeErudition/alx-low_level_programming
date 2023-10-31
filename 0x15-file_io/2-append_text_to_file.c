#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file.
 *
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: (1) on success. (-1) on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || text_content == NULL)
	{
		return (-1);
	}
	write_bytes = write(fd, text_content, strlen(text_content));
	if (write_bytes == -1 || (size_t)write_bytes != strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
