#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: void
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - writes the character x to stdout
 * @x: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(int x)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (x == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (x != BUF_FLUSH)
		buf[i++] = x;
	return (1);
}

