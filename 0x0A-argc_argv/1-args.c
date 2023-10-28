#include <stdio.h>

/**
 * main - A program that prints the numbers of arguments
 * @argc: Number of command line arguments
 * @argv: Character of arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

