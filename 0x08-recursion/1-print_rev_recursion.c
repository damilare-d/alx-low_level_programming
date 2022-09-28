#include "main.h"
/**
 * _print_rev_recursion - function to print a string backwarsds
 * @s: pointer to string
 * Return: string
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
