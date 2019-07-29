#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
* print_char - writes the character c to stdout
* @c: The character to print
* Return: always 1
*/
int print_char(va_list c)
{
char value = va_arg(c, int);
_putchar (value);
return (1);
}
/**
* print_string - writes the string s to stdout
* @s: The string to print
* Return: the lenght of the string
*/
int print_string(va_list s)
{
int i;
char *string = va_arg(s, char *);
if (string == NULL)
string = "(null)";
for (i = 0; string[i] != '\0'; i++)
{
_putchar(string[i]);
}
return (i);
}
/**
* print_percentage - writes the % to stdout
* Return: always 1
*/
int print_percentage(void)
{
_putchar('%');
return (1);
}
