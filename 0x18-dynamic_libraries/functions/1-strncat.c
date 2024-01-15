#include "main.h"

/**
 * _strncat - a function that
 * concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * @n: size of bytes to be used
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest != '\0')
		dest++;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (result);
}
