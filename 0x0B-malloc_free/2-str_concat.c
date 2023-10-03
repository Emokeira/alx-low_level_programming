#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: pointer to the new strings
 */
char *str_concat(char *s1, char *s2)
{
	char *strng;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strng = malloc(sizeof(char) * (i + j + 1));

	if (strng == NULL)
	{
		free(strng);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strng[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strng[k] = s2[j];

	return (strng);
}
