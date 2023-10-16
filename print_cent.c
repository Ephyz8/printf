#include "main.h"

/**
 * print_cent - prints a character
 * @args: variadic parameter
 *
 * Return: pointer
 */

int print_cent(va_list args)
{
	const char *format = "%";
	int count = 0;

	write(1,format,1);
	count++;

	return (count);

}
