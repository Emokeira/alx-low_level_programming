#include "main.h"

/**
 * _strdup - function that returns a pointer to a new string
 * which is a duplicate of the string
 * @str: string to duplicate
 * Return: Pointer to duplicate string or Null on insuficient memory
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	while ((copy[i] = str[i]) != '\0')
		i++;

	return (copy);
}

