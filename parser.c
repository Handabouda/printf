#include "main.h"

/**
 * parser - parses the format string and calls functions
 * @format: character string specifying the format
 * @arg_list: argument list
 *
 * Return: the number of characters printed
 */
int parser(const char *format, va_list arg_list)
{
	int i, j, num_printed = 0;
	char *str;

	for (i = 0; format && format[i]; i++)
	{
		/* print normal character and continue */
		if (format[i] != '%')
		{
			num_printed += _putchar(format[i]);
			continue;
		}
		if (format[i + 1] == '%')
		{
			num_printed += _putchar('%');
			i++;
			continue;
		}
		j = i + 1;
		while (format[j] == ' ')
			j++;
		switch (format[j])
		{
			case 'c':
				num_printed += print_char(arg_list);
				break;
			case 's':
				str = va_arg(arg_list, char *);
				if (str == NULL)
					str = "(null)";
				num_printed += print_string(str);
				break;
			default:
				num_printed += _putchar('%');
				if (format[j] != '\0')
					num_printed += _putchar(format[j]);
				break;
		}
		i = j;
	}
	return (num_printed);
}

