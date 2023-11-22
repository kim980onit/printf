#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format -function that converter for printf
 * @ph:parameter1 for the type char pointer of the specifier
 * @function:parameter2 for the function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list val);
int print_unsigned(va_list args);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int print_bin(va_list val);
int print_revs(va_list args);
int print_rot13(va_list args);
int print_interger(va_list args);
int print_decimal(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_percent(void);
int print_char(va_list val);
int print_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
