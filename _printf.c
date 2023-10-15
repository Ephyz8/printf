#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - prints formatted string
 * @format: formatted string
 * @...: variadic argument
 * Return: length of characters printed
 */

int _printf(const char *format, ...)
{
	/*va_list arg;*/
	/*va_start(arg, format);*/
	int i = 0;
	int count = 0;
	int value = 0;
	
	/*Prevent parsing a null pointer*/
	if (format == NULL)
		return (-1);

	/*Print each character of the string*/
	while (format[i])
	{
		if (format[i] != '%')
		{
			count = write(1,&format[i],1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			printf("a percent is  detected\n");
		}
		i++;
	}
	return (count);

}
