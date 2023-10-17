#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: the arguments to use
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list args, int printed)
{
	int character = va_args(args, int);

	_putchar(character);
	return (printed + 1);
}
