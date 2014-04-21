#include <stdio.h>

void factorial(int num);

int main()
{
	int n;
	int num;

	scanf("%d", &n);
	
	while (n > 0)
	{
		scanf("%d", &num);
		factorial(num);
		n--;
	}
	return 0;
}

void