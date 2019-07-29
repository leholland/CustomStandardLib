#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
* struct v_types - Type of formats
*
* @valid: format acepted
* @f: The function associated
*/

typedef struct v_types
{
char *valid;
int (*f)();
} types;

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int print_char(va_list c);
int print_string(va_list s);
int print_percentage(void);
char *leet(char *s);
#endif
