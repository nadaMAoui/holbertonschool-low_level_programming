#include "main.h"
#include <stdio.h>
/**
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file, rw;
	unsigned int i;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++)
	{
		rw = write(file, text_content, i);
		if (rw == -1)
			return (-1);
	}
	close(file);
	return (1);
}
