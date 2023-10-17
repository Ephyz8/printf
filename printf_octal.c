#include "main.h"

/**
 * printf_octal - prints a binary number
 * @num: number of arguments
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_octal(unsigned int num, int printed)
{
	int oct[100], i = 0, j;


	while (num != 0)
	{
		int remaider = num % 8;

		oct[i] = 48 + remaider;
		i++;
		num /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		printed++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(oct[j]);
			printed++;
		}
	}
	return (printed);
}
