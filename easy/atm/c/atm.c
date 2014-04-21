#include <stdio.h>
#include <math.h>

int main()
{
	float withdraw, balance;
	float new_balance;
	
	scanf("%f %f", &withdraw, &balance);
	
	new_balance = balance - withdraw - 0.5;

	if (new_balance < 0 || fmod(withdraw, 5) != 0)
	{
		new_balance = balance;
	}

	printf("%.02f\n", new_balance);

	return 0;
}a