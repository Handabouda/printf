#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: format string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to
 * strings)
 */
int _printf(const char *format, ...)
{
	va_list args;
	char *str, ch;
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				ch = (char) va_arg(args, int);
				count += _putchar(ch);
				break;
			case 's':
				str = va_arg(args, char *);
				while (*str)
				{
					count += _putchar(*str);
					str++;
				}
				break;
			case '%':
				count += _putchar('%');
				break;
			default:
				count += _putchar('%');
				count += _putchar(*format);
				break;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

