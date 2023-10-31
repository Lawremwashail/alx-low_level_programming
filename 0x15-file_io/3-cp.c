#include "main.h"

/**
 * main - the main function
 * @argc: argument count
 * @argv: pointer to argument array
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int file_to, file_from, fd_to, fd_from;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * BUF_SIZE);
	if (!buff)
	{
		return (0);
	}
	file_from = open(argv[1], O_RDONLY);
	error_98(file_from, buff, argv[1]);
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(file_to, buff, argv[2]);
	do {
		fd_to = read(file_from, buff, BUF_SIZE);
		if (fd_to == 0)
		{
			break;
		}
		error_98(fd_to, buff, argv[1]);
		fd_from = write(file_to, buff, fd_to);
		error_99(fd_from, buff, argv[2]);
	} while (fd_from >= BUF_SIZE);
	fd_to = close(file_to);
	error_100(fd_to, buff);
	fd_to = close(file_from);
	error_100(fd_to, buff);
	free(buff);
	return (0);
}

/**
* error_98 - function to check error 98 from main function
* @file_to: the file to check
* @buff: the buffer
* @argv: pointer to argument array
* Description: prints read file error
*/

void error_98(int file_to, char *buff, char *argv)
{
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv);
		free(buff);
		exit(98);
	}
}

/**
* error_99 - function to check error 99 from main function
* @file_to: the file to check
* @buff: the buffer
* @argv: pointer to argument array
* Description: prints write file error
*/

void error_99(int file_to, char *buff, char *argv)
{
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: cant't write to %s\n", argv)
		{
			free(buff);
			exit(99);
		}
	}
}

/**
* error_100 - function to check error 100 from main function
* @file_to: the file to check
* @buff: the buffer
* Description: prnts close file error
*/

void error_100(int file_to, char *buff)
{
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %i\n", file_to)
			free(buff);
			exit(100);
	}
}
