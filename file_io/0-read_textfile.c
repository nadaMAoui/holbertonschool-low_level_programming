#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 *read_textfile - function
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file, r, w, c;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(file, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(r, buffer, STDOUT_FILENO);
	if (w == -1)
	{
		free(buffer);
		return (0);
	}
	if (r != w)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	c = close(file);
	if (c == -1)
		return (0);

	return (w);
}
