/**
** _pow_recursion - returns x power of y
** @x: base number
** @y: number of power
**
** Return: x pow y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
