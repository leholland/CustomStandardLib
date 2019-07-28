#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
* redirect_format - redict depending of the format
* @argp: list of arguments
* @format: type of string
* @printFormat: Array with valid types
* Return: the number of char printing
*/
int redirect_format(va_list argp, const char *format, types *printFormat)
{
unsigned int i, j;
int cont = 0;
i = j = 0;
while (format && format[i])
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
while (j < 4)
{
if (format[i] == *printFormat[j].valid)
{
if (format[i] != '%')
{
printFormat[j].f(argp);
cont++;
}
else
{
printFormat[j].f();
cont++;
}
}
j++;
}
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
{"%", print_percentage}
};

va_start(argp, format);
count = redirect_format(argp, format, printFormat);
va_end(argp);
return (count);
}
