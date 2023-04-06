/**
** is_prime_number_f - detects if a number is a prime number
** @n: The number to tast
** @i: iterator
** Return: 1 if n is a prime number. 0 else case.
*/

int is_prime_number_f(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0 && n != i)
		return (0);
	return (is_prime_number_f(n, i + 1));
}

/**
** is_prime_number - detects if an number is a prime number
** @n: the number to test
** Return: 1 if n is a prime number. 0 else case
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_number_f(n, 2));
}
