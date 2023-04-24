#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 * struct specifier - struct for conversion specifier and its print function
 * @specifier: the conversion specifier character
 * @f: the corresponding function to print the specifier
 *
 * Description: This structure associates a conversion specifier character
 * with its corresponding function to print the specifier.
 */
typedef struct specifier
{
	char specifier;
	int (*f)(va_list);
} specifier_t;

/* function prototypes */
int _printf(const char *format, ...);

int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(va_list arg);

#endif /* HOLBERTON_H */

