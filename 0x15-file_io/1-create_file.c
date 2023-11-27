#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer to a file directory
 * @text_content: pointer to content of the file
 *
 * Return: 1 or -1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int file_new, len;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	file_new = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_new == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes = write(file_new, text_content, len);
		if (bytes != len)
		{
			close(file_new);
			return (-1);
		}
	}
	close(file_new);
	return (1);
}
/**
 * _strlen - a function that returns length of a string
 * @s: pointer to a string.
 *
 * Return: length of a string
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
