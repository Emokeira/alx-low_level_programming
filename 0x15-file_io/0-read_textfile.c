#include "main.h"
/**
 * read_textfile - a function that reads a text and prints it
 * to the POSIX standard output.
 * @filename: file to read.
 * @letters: amount of letters to print
 *
 * Return: 0 or actual number of letters it could print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t text = 0;
	int tx_input;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);

	tx_input = open(filename, O_RDONLY);
	if (tx_input == -1)
	{
		free(s);
		return (0);
	}
	text = read(tx_input, s, letters);
	if (text == -1)
	{
		free(s);
		close(tx_input);
		return (0);
	}
	if (write(STDOUT_FILENO, s, text) == -1)
	{
		free(s);
		close(tx_input);
		return (0);
	}
	close(tx_input);
	free(s);

	return (text);
}
