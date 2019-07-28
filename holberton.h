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
void (*f)();
} types;

int _putchar(char c);
int _printf(const char *format, ...);
void print_number(int n);

#endif
