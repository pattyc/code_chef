#include <stdio.h>

int main(void)
{
	int n_test, n_lines;
	int *triangle;

	scanf("%d", &n_test);
	while (n_test > 0)
	{
		scanf("%d", &n_lines);
		triangle = (int *)malloc(sizeof(int) * n_lines);

		while (n_lines > 0)
		{
			scanf("%d")
			n_lines--;
		}
		n_test--;
	}

	return 0;
}