#include main .h
void print buffer(char buffer[], int *buff_ind);

/**
* print - printf fuction
* @format : format.
* Return  : Printed chars.
*/

int _printf(const char *format,....)
{
int i, printed = 0, printed _char= 0;
int flag, widhth, precision, size, buff_ind = 0;
va_list list;
char buffer [BUFF_SIZE];

if (format == NULL)
	return (-1);

va_start(list,format);
for (i =0; format && format[i] != '\0'; i++)
if (format [i] != '%')
	buffer[buff_ind++] = format [i];
if (buff_ind == BUFF_SIZE)
	print_buffer(buffer, &buff_ind);
/*write(1, &format[i], 1);*/
printed_chars++;
}
else
{
	print_buffer(buffer, &buff_ind);
	flags = get_flag(format, &i);
	width = get_width(format, &i, list);
	size =get_size(format, &i);
	++i;
	printed = hanndle_print(format , &i, list, buffer,
		flags, widhth, precision, size);
	}
}
print_buffer(buffer,&buff_ind);
va_end(list);
return (printed_chars);
}
/**
*print_buffer - prints the contents of the buffer if it exist
*@buffer: Array of chars
*@buff_ind: Index at which to add next char,represents the length.
*/
void print_buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		wrtie(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
