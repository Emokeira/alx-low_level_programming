#include "main.h"
/**
 * _isdigit - A function that
 * that checks for a digit
 * @c: value to check
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
