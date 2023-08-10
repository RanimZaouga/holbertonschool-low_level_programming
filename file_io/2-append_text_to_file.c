#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: The name of the file.
 * @text_content: The text content to append (NULL terminated).
 *
 * Return: 1 on success, -1 on failure. If the file does not exist,
 *         if you do not have
 *         the required permissions, or if any errors occur, -1 is returned.
 *         If filename is NULL, -1 is returned.
 *         If text_content is NULL, 1 is returned if the file exists and
 *         -1 if it does not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
