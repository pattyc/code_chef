#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int count_zeroes(int num);

int main()
{
	int n, num;
	scanf("%d", &n);
	while (n > 0)
	{
		scanf("%d", &num);
		printf("%d\n", count_zeroes(num));
		n--;
	}
	return 0;
}


// finds the total number of zeroes at the end of the number once the factorial
// has been applied.
int
count_zeroes(int num)
{
	int divisor;
	int count = 0;
	
	if (num < 0)
	{
		return -1;
	}

	for (divisor = 5; floor (num / (float) divisor) >= 1; divisor *= 5)
	{
		count += num / divisor;
	}

	return count;
}