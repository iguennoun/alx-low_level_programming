/**
** int_index - Function that searches for an integer in an array
** @array: The array to search in
** @size: the number of element int the array to search in
** @cmp: pointer to the function to be used to compare values
**
** Return: The index of the first element for which the cmp function
**	   does not return 0
**	   If no elements matches return -1
**	   If size <= 0, return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || (size <= 0))
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
		return (-1);
	}
}
