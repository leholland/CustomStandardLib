#include "holberton.h"

/**
* print_number - Prints digits to std output
* @n: Integer to print
* Return: 0
*/

static int print_number(int n)
{
int hold = 0;
char otter;

if (n > 9 || n < -9)
{
hold += print_number(n / 10);
}
else if (n < 0)
hold += write(1, "-", 1);
if (n < 0)
otter = (-1 * (n % 10)) + '0';
else
otter = (n % 10) + '0';
hold += write(1, &otter, 1);
return (hold);
}
/**
* int_spec - Holder
* @n: Integer in print_number
* Return: byte
*/
int int_spec(va_list n)
{
int byte;
int i = va_arg(n, int);

byte = 0;
byte += print_number(i);
return (byte);
}
