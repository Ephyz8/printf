#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);

/**
 * struct func - struct for specifier
 * @t: character to compare
 * @f: func to handle printing
 */
typedef struct func
{
	char* t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
int print_dec(va_list);
int print_int(va_list);
int _putchar(char c);
int print_bin(va_list val);
int print_revs(va_list val);
int print_rot13(va_list val);
int print_unsigned(va_list arg);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_xtra(unsigned int num);
int print_exc_string(va_list val);
int print_hex_extra(unsigned long int num);
int print_pointer(va_list val);
#endif
