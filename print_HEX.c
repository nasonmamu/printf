#include "main.h"
/**
*print_HEX.c - convert to HEX
*@val: variable parameter
*Return: counter
*/

int print_HEX(va_list val)
{
	int print_oct(var_list val)
{
	int i,counter = 0;*array;
	int 
	unsigned int num = val_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 !=0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) *counter);
	if (array == NUUL)
		return (NULL);
	for (i = 0; i<counter; i++)
	{
		array[i] = tem % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i--)
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	free(array);
	return (counter)
}
