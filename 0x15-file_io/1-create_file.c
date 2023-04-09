#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the filename
 * @text_content: content of the file
 * Return: filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int w;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	for (nl = 0; text_content[nl]; nl++)
		;

	w = write(fd, text_content, nl);

	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
