#include "main.h"
/**
 * read_textfile - Reads a specified number of letters from a text
 *  file and prints them to the standard output.
 *
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read and print.
 *
 * @return The actual number of letters read and printed. If the file cannot be opened or read,
 *         or if write fails to print the expected amount of bytes, 0 is returned.
 *         If filename is NULL, 0 is returned.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *lett;

	if (filename == NULL)
	{
		return (0);
	}
	lett = malloc(letters);
	if (lett == NULL)
	{
		return (0);	
	}
	op = open(filename, O_RDONLY);
	rd = read(o, text, letters);
	w = write(STDOUT_FILENO, text, r);
	if (op == -1 || rd == -1 || wr == -1)
	{
		free(lett);
		return (0);
	}
	free(lett);
	close(op);
	return (wr);
}
