#include "main.h"
/**
 * main - determine if a number is positive, negative or zero
 * 0 : is the number to be checked
 * Return : 0 on success
 */

void positive_or_negative(int i)

{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	return (0);
}