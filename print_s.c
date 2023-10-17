#include "main.h"

/**
 * print_str - prints a character
 * @arg: variadic parameter
 *
 * Return: pointer
 */

int print_str(va_list arg)
{
	char *s = va_arg(arg, char*);
	int count = 0;

	if (s)
	{
		int length = 0;

		while (s[length] != '\0')
		{
			length++;
		}
		write(1, s, length);
		count += length;
	}
	return (count);
}
