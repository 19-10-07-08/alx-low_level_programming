#include "main.h"
/**
 * create_file - functioncreates an array of chars, and initializes
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int oo, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	oo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(oo, text_content, len);

	if (oo == -1 || w == -1)
		return (-1);

	close(oo);

	return (1);
}
