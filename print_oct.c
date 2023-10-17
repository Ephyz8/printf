#include "main.h"

/**
 * print_oct - prints octal number
 * @val: argument
 * Return: int
 */

int print_oct(va_list val)
{
	int i, counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *array;
	unsigned int t = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	for (i = 0; i < counter; i++)
	{
		array[i] = t % 8;
		t = t / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (counter);
}
