#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num_of_days;
	int day_of_week;
	puts("How many days this month? ");
	int result = scanf("%d", &num_of_days);
	puts("What's the starting day (1=Monday, 7 = Sunday)");
	int value = scanf("%d", &day_of_week);
	puts("M	T	W	T	F	S	S");
	for(int j = 1; j < day_of_week; j++)
	{
		printf("	");
	}
	for(int i = 1; i<=num_of_days; i++)
	{
		printf("%d", i);
		printf("	");
		day_of_week++;
		if(day_of_week > 7)
		{
			day_of_week = 1;
			printf("\n");
		}
	}
}
