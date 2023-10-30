#include "main.h"

/**
 * append_text_to_file - appends the text at the end of a file
 * @file: filename
 * @text_content: content added
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *file, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!file)
		return (-1);

	fd = open(file, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
