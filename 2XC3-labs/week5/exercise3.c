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
		switch (fin_c > c) {
                case 1: 
                    fin_c = c;
                    fin_a = a;
                    fin_b = b;
                    break;
                case 0: 
                    switch (fin_c == c) {
                        case 1: 
                            switch (fin_a > a) {
                                case 1: 
                                    fin_a = a;
                                    fin_b = b;
                                    break;
                                case 0: 
                                    switch (fin_a == a) {
                                        case 1: 
                                            switch (fin_b > b) {
                                                case 1: 
                                                    fin_b = b;
						    break;
						case 0: 
						break;
					}
					break;
				}
				break;
			    }
			    break;
		    }
		    break;
            }
        } else {
            printf("Invalid input. Please enter integers.\n");
        }

    } while (a != 0 && b != 0 && c != 0);
    printf("Earliest date entered: %02d/%02d/%d\n", fin_a, fin_b, fin_c);

    return 0;
}
