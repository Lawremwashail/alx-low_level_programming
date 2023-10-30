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
	int length;
	int j;
	int fl;
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
	if (!buff)
	{
		return (0);
	}
	read(fd, buff, letters);
	buff[letters] = '\0';

	for (j = 0; buff[j] != '\0'; j += 1)
		length += j;
	fl = close(fd);

	if (fl != 0)
		exit(-1);
	fl = write(STDOUT_FILENO, buff, length);
	if (fl != length)
		return (0);
	free(buff);
	return (length);
}

