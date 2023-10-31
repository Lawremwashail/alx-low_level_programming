#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: name of the file
 * @letters: numbers of letters to print
 * Return: 0 if NULL anf fails to write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, write_bytes;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);
	}
	read_bytes = read(fd, buff, letters);
	if (read_bytes == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (write_bytes == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	return (read_bytes);


}

