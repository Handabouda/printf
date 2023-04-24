#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: pointer to format which is a character string
 * Return: 0 if success
 */
int _printf(const char *format, ...)
{
	int printed_char;
	conver_t list[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_integer},
		{"b", print_binary},
		{"%", print_percent},
		{"i", print_integer},
		{"r", print_reversed},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_char);
}
