#include "holberton.h"
/**
 * rot13 - encode srting into rot13
 * @ptr: string to encode
 * Return: ptr
 */
int rot13(va_list s)
{
        char *str = va_arg(s, char *);
        int x, y;
        char alpha[56] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        char rot13[56] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        for (x = 0; str[x] != '\0'; x++)
        {
                
                        if (!((str[x] >= 'A' && str[x] <= 'Z') ||
                (str[x] >= 'a' && str[x] <= 'z')))
                                
             _putchar(str[x]);
    
                for (y = 0; alpha[y] != '\0'; y++)
                {
                        if (str[x] == alpha[y])
                        {     
                               _putchar(rot13[y]);
                               /* str[x] = rot13[y];*/
                            
                        }
                    
                   }
    
            }
       return (y);
}

