#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list lst;

	va_start(lst, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lst, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(lst, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(lst, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(lst, char*);
				if (str == NULL)
					str = "(nil";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	va_end(lst);
	printf("\n");
}

