#include <stdio.h>
#include <stdlib.h>

void print_array(int *array, int length);
void quicksort(int *array, int length);
void swap(int *array, int i, int j);

int main(void)
{
	int n, i, num;
	int *array;
	scanf("%d", &n);
	array = (int *)malloc(n*sizeof(int));
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		array[i] = num;
	}

	quicksort(array, n);
	print_array(array, n);

	return 0;
}

void
print_array(int *array, int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf("%d\n", array[i]);
	}
}

void
quicksort(int *array, int length)
{
	int pivot, left, right;

	if (length > 1)
	{
		pivot = array[(length / 2)];
		left = 0;
		right = length - 1;
		while (left < right)
		{
			while (array[left] < pivot)
			{
				left++;
			}

			while (array[right] > pivot)
			{
				right--;
			}
			if (left <= right)
			{
				swap(array, left, right);
				left++;
				right--;
			}
		}
		quicksort(array, (length / 2));
		quicksort(array + (length / 2), (length / 2));
	}
}

void
swap(int *array, int i, int j)
{
	int temp;
	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}