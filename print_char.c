#include "main.h"

/**
 * print_char - prints a single character
 * @arg: argument list
 *
 * Return: the number of characters printed
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

