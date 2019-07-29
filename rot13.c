#include "holberton.h"

/**
* leet - Encodes string into 1337
*@s: String to encode
* Return: string
*/

char *leet(char *s)
{
int i, k;
int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (k = 0; s[k] != '\0'; k++)
{
for (i = 0; a[i] != '\0'; i++)
{
if (s[k] == a[i])
s[k] = b[i];
}
}
return (s);
}
