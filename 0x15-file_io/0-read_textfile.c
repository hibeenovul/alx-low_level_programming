#include "main.h"

/**
 * read_textfile - function to read textfiles
 * @filename: filename
 * @letters: letters
 * Return: if write fails or does not write the expected bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *f;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	f = malloc(sizeof(char) * (letters));
	if (!f)
		return (0);
	r = read(fd, f, letters);
	w = write(STDOUT_FILENO, f, r);

	close(fd);
	free(f);
	return (w);
}
