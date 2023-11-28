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
	int l_index;
	ssize_t write_bytes;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (l_index = 0; text_content[l_index]; l_index++)
		{
		}
		write_bytes = write(fd, text_content, l_index);
		if (write_bytes == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
