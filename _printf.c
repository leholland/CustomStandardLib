#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 */
void print_char(va_list c)
{
	char value = va_arg(c, int);

	_putchar (value);
}

/**
 * print_string - writes the string s to stdout
 * @s: The string to print
 *
 */
void print_string(va_list s)
{
	char *string = va_arg(s, char *);

	for (; *string != '\0'; string++)
	{
		_putchar(*string);
	}
}

/**
 * print_percentage - writes the % to stdout
 * Return: always 0
 */
void print_percentage(void)
{
	_putchar('%');
}

/**
 * _printf - main function
 * @format: type of string
 * @...: arguments
 * Return: the number of char printing
 */
int _printf(const char *format, ...)
{
	unsigned int i, j;
	va_list argp;

	types printFormat[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage}
	};

	i = j = 0;
	va_start(argp, format);
	while (format && format[i])
	{
		j = 0;
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
		else
		{
			i++;
			while (j < 4)
			{
				if (format[i] == *printFormat[j].valid)
				{
					if (format[i] != '%')
						printFormat[j].f(argp);
					else
						printFormat[j].f();
				}
				j++;
			}
			i++;
		}
	}
	va_end(argp);
	return (0);
}
