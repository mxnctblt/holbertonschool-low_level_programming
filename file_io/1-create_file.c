#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: ptr to the filename
 * @text_content: pointer to a string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write(o, text_content, len);

	if (o == -1)
		return (-1);

	close(o);
	return (1);
}
