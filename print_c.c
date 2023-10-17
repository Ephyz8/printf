#include "main.h"

/**
 * print_char - prints a character
 * @arg: variadic parameter
 *
 * Return: pointer
 */

int print_char(va_list arg)
{
	char c = va_arg(arg, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (count);
}
