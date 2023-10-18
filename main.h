#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct format
{
	char *id;
	int (*f);
}	match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_unsigned(va_list types, char buffer[];
int flags, int width, int precission, int size);
int print _ non _ printable(va_list types, char buffer[],
int flags, int width, int precision, int size;
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(var_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_revs(va_list val);
int print_rot13(va_list val);
#endif
