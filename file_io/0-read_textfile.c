#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file, r, w;

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

	free(buffer);
	close(file);

	return (w);
}
