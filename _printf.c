#include "main.h"

/**
 * _printf - prints formatted string
 * @format: formatted string
 * @...: variadic argument
 * Return: length of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	va_list arg;
	int (*f)(va_list);
	va_start(arg, format);
	
	/*Prevent parsing a null pointer*/
	if (format == NULL)
		return (-1);

	/*Print each character of the string*/
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1,&format[i],1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(arg);
				count = count + value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1,&format[i + 1],1);
				count = count + value;
				i = i + 2;
				continue;
			}

		}
		i++;
	}
	va_end(arg);
	return (count);

}
