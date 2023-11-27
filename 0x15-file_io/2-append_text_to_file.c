#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file.
 * @filename: pointer to a file directory
 * @text_content: pointer to content file
 *
 * Return: 1 or -1
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_new, len;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	file_new = open(filename, O_WRONLY | O_APPEND);
	if (file_new == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes = write(file_new, text_content, len);
		if (bytes != (ssize_t)len)
		{
			close(file_new);
			return (-1);
		}
	}
	close(file_new);
	if (chmod(filename, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
			== -1)
	return (-1);

	return (1);
}
/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a string.
 *
 * Return: length of string
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
