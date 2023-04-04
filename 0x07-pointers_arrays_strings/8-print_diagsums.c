#include <stdio.h>

/**
** print_diagsums - prints diagonal of square maxtrix int
** @a: matrix
** @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
	int sumdiag1, sumdiag2, i;
			
	sumdiag1 = 0;
	sumdiag2 = 0;

	for (i = 0; i < size; i++)
	{
		sumdiag1 += a[i * size + i];
		sumdiag2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
