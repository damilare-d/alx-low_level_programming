#include "main.h"
/**
 * _pow_recursion - search a string for any of a set of bytes
 * @x: base
 * @y: exposant
 * Retun: Pointer to the byte in 's' that matches one of the bytes
 * or Null if no such byte is found
 */

int _poe_recursion(int x, int y )
{
	if (y < 0 )
		return (-1);
	else if (y == 1)
		return(x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
