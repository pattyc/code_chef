/* 
 * FAILED: too slow 
 *
 * Sort a list of numbers using insertion sort.
 * author: pattyc
 * problem: turbo sort
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *array, int j);

int main()
{
	int n, length;
	int i, j = 0;
	int *array;

	scanf("%d", &n);

	length = n;
	array = (int *)malloc(sizeof(int) * n);

	// insert into array is backwards, but works fine.
	while(n > 0)
	{
		scanf("%d", (array + (n-1)));
		n--;
	}

	// sort array
	for (i = 1; i < length; i++)
	{
		j = i;
		while (j > 0 && array[j] < array[j - 1])
		{
			swap(array, j);
			j--;
		}
	}

	// print result
	for (i = 0; i < length; i++)
	{
		printf("%d\n", array[i]);
	}

	return 0;
}

/*
 * input a pointer to an int array and the number to be swapped with it's previous number.
 */
void swap(int *array, int j)
{
	int temp;
	temp = array[j];
	array[j] = array[j - 1];
	array[j - 1] = temp;
}