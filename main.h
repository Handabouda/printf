#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1 and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _printf - produces output according to a format.
 * @format: A character string containing zero or more directives.
 * @...: Variadic arguments for the format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...);

#endif /* MAIN_H */

