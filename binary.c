#include <stdio.h>
#include "holberton.h"
/**
 * print_binary - print a unsigned int in binary
 * @n: number to convert
 * Return: count of caracters
 */

int print_binary(va_list n)
{
unsigned int binary[32];
unsigned int i = 0;
unsigned int l = 0;
int j;
unsigned int number = va_arg(n, unsigned int);
if (number == 0)
{
_putchar('0');
return (1);
}
while (number > 0)
{
binary[i] = number % 2;
number = number / 2;
i++;
}
for (j = i - 1; j >= 0; j--)
{
l = binary[j];
_putchar('0' + l);
}
return (i);
}
