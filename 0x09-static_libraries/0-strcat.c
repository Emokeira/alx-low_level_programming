#include "main.h"

/**
 * _strcat - concanates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char *final;

	final = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (final);
}
