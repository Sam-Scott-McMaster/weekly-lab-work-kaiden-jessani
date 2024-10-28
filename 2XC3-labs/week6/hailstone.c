#include <stdlib.h>
#include <stdio.h>
long hailstone(long n)
{
    if (n <= 0) {
            printf("Invalid Number. ");
            return EXIT_FAILURE;
    }
    else if (n > 1) {
        printf("%ld\t", n);
	fflush(stdout);
        if(n % 2 == 0) {
            return hailstone(n/2);
        }
        else {
            return hailstone(3*n + 1);
        }
    }
    else {
            printf("%ld\t", n);
	    fflush(stdout);
            return EXIT_SUCCESS;
    }   
}
int main()
{
    hailstone(3);
}
