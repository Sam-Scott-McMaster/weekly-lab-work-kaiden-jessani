#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int b;
	int c;

	int fin_a = 13;
	int fin_b = 31;
	int fin_c = 10000;
	do{
		printf("Enter a date (mm/dd/yyyy): ");
		int a_result = scanf("%d", &a);
		int b_result = scanf("%d", &b);
		int c_result = scanf("%d", &c);
		if (a == 0 && b == 0 && c == 0)
        	{
        		break;
        	}
		if(fin_c > c)
		{
			fin_c = c;
			fin_a = a;
			fin_b = b;
		}
		else if (fin_c == c)
		{
			if(fin_a> a)
			{
				fin_a = a;
				fin_b = b;
			}
			else if (fin_a == a)
			{
				if(fin_b > b)
				{
					fin_b = b;
				}
			}
		}
	}while (a != 0 && b != 0 && c != 0);
	printf("Earliest date entered: %02d/%02d/%d\n", fin_a, fin_b, fin_c);
	return 0;
}
