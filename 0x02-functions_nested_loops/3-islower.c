#include "main.h"

/**
** _islower - To check if a char is a lowercase letter
** @c : The char to be checked
** Return : 1 for lowercase character or 0 for anything else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
