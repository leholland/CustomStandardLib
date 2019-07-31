#include "holberton.h"
#include<stdio.h>
/**
 * rev_string -reverse a string
 * @str: string to reverse
 * Return: lenght of the string
 */
int rev_string(va_list str)
{
int  i, end, count;
char *s = va_arg(str, char *);
count = 0;
for (i = 0; s[i] != '\0'; i++)
{
count++;
}
end = count - 1;
for (i = end; i >= 0; i--)
{
_putchar(s[i]);
}
return (i);
}
