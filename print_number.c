#include "holberton.h"

/**
* print_number - Prints digits to std output
* @n: Integer to print
*/

int print_int(int n)
{

if (n > 9)
{
print_int(n/10);
putchar('0' + n%10);
int a = n / 10;
n -= 10 * a;
print_number(a);
}
_putchar('0' + n);

}

int print_dec(int n)
{
if (n > 9)

}
