/**
** _sqrt_recursion_f - returns the natural square root of a number n
** @n: the number to calculate the square root of.
** @i: iterator.
** Return: square root or -1
*/

int _sqrt_recursion_f(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_recursion_f(n, i + 1));
}

/**
** _sqrt_recursion - returns the natural square root of a number n
** @n: The number to calculate the square root of
**
** Return: the natural square root of n
**/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if	(n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_recursion_f(n, 2));
}
