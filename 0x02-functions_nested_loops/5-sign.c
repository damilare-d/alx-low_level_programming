#iclude "main.h"
/**
 * print_sign - Entry function
 * @n: Character for sign
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchaar('-');
		return (-1);
	}
	else if (n > 0)
	{

		_putchar('+');
		return(1);
	}
	_putchar('0');
	return (0);
}