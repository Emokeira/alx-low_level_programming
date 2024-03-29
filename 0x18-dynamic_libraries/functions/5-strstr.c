#include "main.h"
#include <stddef.h>

/**
 *_strstr - a function that locates a substring
 *@haystack : the string to be searched
 *@needle : the substring to be located
 *
 * Return: If the substring is located
 *
 * If the substring is not located - NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return (NULL);
}
