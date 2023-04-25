#include "main.h"

/**
 * print_string - prints a string
 * @str: string to print
 *
 * Return: the number of characters printed
 */
int print_string(char *str)
{
	int i, num_printed = 0;

	for (i = 0; str && str[i]; i++)
		num_printed += _putchar(str[i]);

	return (num_printed);
}

