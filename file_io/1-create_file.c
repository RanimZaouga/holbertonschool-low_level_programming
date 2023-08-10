#include "main.h"
/**
 * create_file - Creates a file with the specified name and writes
 *  the given text content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file (NULL terminated).
 *
 * Return: 1 on success, -1 on failure. If the file cannot be created, written,
 *         or if there's an error in file operations, -1 is returned.
 *         If filename is NULL, -1 is returned.
 *         If text_content is NULL, an empty file is created.
 */
int create_file(const char *filename, char *text_content)
{
    int o, w, length = 0;

    if (filename == NULL)
    {
        return (-1);
    }
    if (text_content !== NULL)
    {
        length = strlen(text_content);
    }
    o = open(filename, O_CREAT | O_RDWR, 0600);
    w = write(o, text_content, length);

    if (o == -1 || w == -1)
    {
        return (-1);
    }
    close(o);
    return (1);
}
