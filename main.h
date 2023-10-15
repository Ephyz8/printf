#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int (*check_specifier(char*))(va_list);

/**
 * struct func - struct for specifier
 * @t: character to compare
 * @f: func to handle printing
 */
typedef struct func
{
	char* t;
	int (*)(va_list);
}func_t;

#endif
