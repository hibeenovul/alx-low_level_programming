#include "main.h"

/**
 * append_text_to_file - function that append a file
 * @filename: name of the file
 * @text_content: text content of the file
 * Return: Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int w;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;
		w = write(fd, text_content, nl);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
