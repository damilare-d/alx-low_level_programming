#include "main.h"
/**
 * print_alphabet_x10 - Entry code
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;

	for(int i = 0; i < 10; i++ )
	{
		c = 'a';
		while ( c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
