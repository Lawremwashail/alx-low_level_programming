#include "main.h"
#include <string.h>

/**
 * append_text_to_file - function that appends text file
 * @filename: the name of the file
 * @text_content: string to add
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, _write_bytes;

	if (!filename)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(f);
		return (1);
	}
	_write_bytes = write(f, text_content, strlen(text_content));
	if (_write_bytes == -1 || (size_t)_write_bytes != strlen(text_content))
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);

}
