#include "main.h"

/**
 * check_speciefier - check for valid specifier and assigns approp. func
 * @format: specifier (*char)
 * Return: pointer to func if succful else NULL
 */

int (*check_specifier(const char *format))(va_list)
{
	int i;

	func_t my_array[9] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{"d", print_dec},
		{"i", print_int},
		{"b", print_bin},
		{"r", print_revs},
		{"R", print_rot13},
		{NULL,  NULL}};

	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
		}

	}
	return (NULL);
}
