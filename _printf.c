#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
* search_valid - Search if the format is in the list of valid values
* @c: character to compare
* @printFormat: Array with valid types
* @argp: list of arguments
* @aux: pointer to the count
* Return: 1 if is valid 0 is not
*/
int search_valid(char c, types *printFormat, va_list argp, unsigned int *aux)
{
int j = 0;
while (j < 8)
{
if (c == *printFormat[j].valid)
{
if (c != '%')
*aux += printFormat[j].f(argp);
else
*aux += printFormat[j].f();
return (1);
}
j++;
}
return (0);
}
/**
* redirect_format - redict depending of the format
* @argp: list of arguments
* @format: type of string
* @printFormat: Array with valid types
* Return: the number of char printing
*/
int redirect_format(va_list argp, const char *format, types *printFormat)
{
unsigned int i, j, cont, isvalid;
i = j = cont = 0;
while ((format && format[i]) && format[i] != '\0')
{
j = 0;
if (format[i] != '%')
{
_putchar(format[i]);
i++;
cont++;
}
else
{
i++;
if (format[i] != '\0')
{
isvalid = search_valid(format[i], printFormat, argp, &cont);
if (format[i] != ' ' && isvalid == 0)
{
_putchar(format[i - 1]);
_putchar(format[i]);
cont = cont + 2;
}
}
else
return (-1);
i++;
}
}
return (cont);
}

/**
* _printf - main function
* @format: type of string
* @...: arguments
* Return: the number of char printing
*/
int _printf(const char *format, ...)
{
va_list argp;
int count = 0;
types printFormat[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percentage},
{"d", int_spec},
{"i", int_spec},
{"b", print_binary},
{"R", rot13},
{"r", rev_string},
{'\0', NULL}
};
if (format == NULL)
return (-1);
va_start(argp, format);
count = redirect_format(argp, format, printFormat);
va_end(argp);
return (count);
}
