
/**
** _strspn - length of prefix substring
** @s: string to go through
** @accept: accepted bytes
** Return: returns usigned values
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
		}
		s++;
	}
	return (n);
}
