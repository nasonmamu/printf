#include "main.h"

/**
*_putchar - write the character c to stdout
*@: The character top print
*
*Return: on success 1.
*on error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
