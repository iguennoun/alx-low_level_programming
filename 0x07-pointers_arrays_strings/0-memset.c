/**
** _memset - fill a block of memory with a specific char
** @s: starting address of memory to be filled
** @b: the char to fill with
** @n: number of bytes to copy
**
** Return: a pointer to the destianation array
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
