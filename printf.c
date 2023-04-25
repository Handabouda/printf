#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: A character string containing zero or more directives.
 * @...: Variadic arguments for the format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	char c, *s;
	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = (char)va_arg(args, int);
					count += _putchar(c);
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(null)";
					count += _puts(s);
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					count += _putchar(format[i]);
					break;
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
	}
	va_end(args);
	return (count);
}

