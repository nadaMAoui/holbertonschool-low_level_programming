#include "main.h"
/**
 *jack_bauer - fonction
 * 
 *Description: 'a function that prints every minute of the day of Jack Bauer'
 *
 *h= hours, m= minutes
 *
 *Return: always success
*/
void jack_bauer(void)
{

	int h, m;

	for(h = 0; h < 24; h++)
	{
		for(m = 00; m < 60; m++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}
