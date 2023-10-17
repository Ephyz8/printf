#include "main.h"

/**
 * print_HEX_xtra - converts to hex number
 * @num: argument
 * Return: int
 */

int print_HEX_xtra(unsigned int num)
{
	int i, counter = 0;
	int *array;
	unsigned int t = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(sizeof(int) * counter);
	
	for (i = 0; i < counter; i++)
	{
		array[i] = t % 16;
		t = t / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
