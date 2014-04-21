#include <stdio.h>

int main()
{
	int n, k, num;
	int total = 0;

	scanf("%d %d", &n, &k);
	
	while(n > 0)
	{
		scanf("%d", &num);

		if (num % k == 0)
		{
			total++;
		}
		n--;
	} 
	printf("%d", total);
	return 0;
}