#include "main.h"
/**
 * print_char - prints character
 * @a: pointer to argument
 * @parm: pointer to parameters of struct
 * Return: number of characters printed
 */
int print_char(va_list a, params_t *parm)
{
	char p_char = ' ';
	unsigned int pad = 1, sum = 0, ch = va_arg(a, int);

	if (parm->minus_flag)
		sum += _putchar(ch);
	while (pad++ < parm->width)
		sum += _putchar(p_char);
	if (!parm->minus_flag)
		sum += _putchar(ch);
	return (sum);
}
