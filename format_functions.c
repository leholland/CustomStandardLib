#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
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
