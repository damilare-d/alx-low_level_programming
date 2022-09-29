#include "main.h"
/**
 * check_prime - check all number < n if its prime
 * @n: int
 * @primecheck:int
 * Return: int
 */
int check_prime( int n, int primecheck)
{
	if (primecheck >= n && n > 1)
		return (1);
	else if (n % primecheck == 0 || n <= 1)
		return (0);
	else 
		return (check_prime(n, primecheck + 1) );
}
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2) );
}
