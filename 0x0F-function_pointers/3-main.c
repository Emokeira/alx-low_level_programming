#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the result of simple operations
 * @argc: the number of arguments given to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = op(num1, num2);

	printf("%d\n", result);
	return (0);
}
