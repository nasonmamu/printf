#include "main.h"
/**
*print_pointer.c - printer
*@val: variable
*Return: counter
*/

int print_pointer(va_list val)
{
	void *p;
	char *s = "(null)";
	long int a;
	int i;
	int b;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\o'; i++)
			_putchar(s[i]);
		return (i);

	}
	a=(unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_extra(a);
	return (b + 2);
}
