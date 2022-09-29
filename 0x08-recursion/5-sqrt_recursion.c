#include "main.h"
/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int sqrval)
{
	if (sqrval * sqrval == n )
	{
		return (sqrval);
	}
	else if (sqrval * sqrval < n)
	{
		return (square (n, sqrval + 1) );
	}
	else {
		return (-1);
	}
}
int _sqrt_recursion(int n)
{
	return (square(n, 1) );
}

