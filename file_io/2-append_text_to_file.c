#include "main.h"
/**
 * append_text_to_file - add bytes at the end of file
 * @filename: filename
 * @text_content: bytes of file
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, rw;
	unsigned int i;

	if (!filename)
		return (-1);
	file = open(filename, O_RDONLY | O_APPEND);
	if (!file)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i];)
			i++;
		rw = write(file, text_content, i);
		if (rw == -1)
			return (-1);
	}
	close(file);
	return (1);
}
