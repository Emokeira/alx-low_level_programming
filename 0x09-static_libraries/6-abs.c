#include "main.h"
/**
 * _abs - a function that computes the absolute value
 * of an integer.
 * @c: value to check
 * Return: integer
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
}
