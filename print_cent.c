#include "main.h"

/**
 * print_cent - prints a character
 * @arg: variadic parameter
 *
 * Return: pointer
 */

int print_cent(va_list arg)
{
	char *format = va_arg(arg, void *);
	/*const char *format = "%";*/
	int count = 0;

	format = "&";
		write(1, format, 1);
		count++;

	return (count);

}
