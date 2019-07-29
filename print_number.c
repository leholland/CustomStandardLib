#include "holberton.h"

/**
* print_number - Prints digits to std output
* @n: Integer to print
*/

int print_number(int n)
{

if (n > 9)
{
int a = n / 10;
n -= 10 * a;
print_number(a);
}
_putchar('0' + n);
}
