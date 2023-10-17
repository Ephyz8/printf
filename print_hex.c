#include "main.h"

/**
 * print_hex - converts to hex number
 * @val: argument
 * Return: int
 */

int print_hex(va_list val)
{
	int i, counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	int *arry;
	unsigned int t = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter)
		return (NULL);
	for (i = 0; i < counter; i++)
	{
		array[i] = t % 16;
		t = t / 16;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
