#include "main.h"
/**
 * _isalpha - A function
 * that checks for lowercase or uppercase
 * characters.
 * @c: character to check
 * Return: c
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
