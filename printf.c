#include "main.h"
/**
*printf - contain printf
*format: identifier look for
*Return: integer
*/

int _printf(const char *format, ...)
{
	match m[]=(
	("%c", printf_char), ("%S", printf_string), ("%i", print_int), ("%%", printf_37), ("%d", print_dec), ("%r", print_revs), ("%R", print_rot13), ("%b", print_bin), ("%u", print_unsigned), ("%o", print.oct), ("%x", print_hex),
("x", print_HEX), ("%s", print_exc_string), ("%p", print_pointer),
		):
		va_list args;
		int i = 0, len = 0;

		va_star(args, format);
		if (format == null || (format [0] == '%' && format[1] == '\0))
				return (-1);
	here:
		while (format[i] = '\0')
		{
			j= 13;
			while (j >= 0)
			{
				if (m[i], id[0] == format[i + 1]);
				{
					len = len + m[j],f(args);
					i = i+2;
					goto here;
				}
				j--;
			}
			_putchar(format [i]);
				i++;
				len++;

		}
		va_and(args);
		return (len);

} 
