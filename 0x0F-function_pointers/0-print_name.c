/**
** print_name - Print a name using pointer to function 'f'
** @name: String to print to stdout
** @f: pointer to function 'f'
** Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
