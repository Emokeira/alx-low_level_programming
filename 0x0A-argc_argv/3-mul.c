#include <stdio.h>
#include <stdlib.h>

/**
* main - A program that multiplies two numbers
* @argc: Number of command lines arguments.
* @argv: Character of arrays.
* Return: Return 1 if it does not recieve two arguments
*/
int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc < 3 || argc >= 4)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{

			result *= atoi(argv[i]);
		}

		printf("%d\n", result);
	}
	return (0);
}
