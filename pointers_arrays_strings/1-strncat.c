#include "main.h"
/**
 * puts_half - prints half of string 
*/
void puts_half(char *str)
{
    int i = 0;
    int n = 0;
    char ch;
    while (str[i] != '\0') // calculer longeur de la chaine de caractere 
    {
    i += 1;  
    }
    ch = str[n];
    n = / 2;
    if (n % 2 = 0)
    {
        n += 1; // calculer nombre de case apres la division / 2
    }
    while ( str[n] != 0)
    { 
    putchar (* (str + n));
    n += 1;
    }
    else if (n % 2 != 0)
    {
    putchar (* (str + n));
    n += 1;
    putchar (ch);
    }
    putchar ('\n');
}


{

}
