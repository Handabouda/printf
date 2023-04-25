#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string specifying the format
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	va_list arg_list;

	va_start(arg_list, format);

	/* call the parser and print the characters */
	printed_chars = parser(format, arg_list);

	va_end(arg_list);

	return (printed_chars);
}

