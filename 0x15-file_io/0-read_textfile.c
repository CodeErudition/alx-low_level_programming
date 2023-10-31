#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: The name of the text file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print,
 * (0) if the file cannot be opened or read, or write fails or does not write
 * the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *f_buffer;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	f_buffer = malloc(letters);
	if (f_buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, f_buffer, letters);
	if (read_bytes == -1)
	{
		close(fd);
		free(f_buffer);
		return (0);
	}
	write_bytes = write(1, f_buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		close(fd);
		free(f_buffer);
		return (0);
	}
	close(fd);
	free(f_buffer);
	return (write_bytes);
}
