/* Starter code for Lab 6.1 Activity
 *
 * This file will not compile as is. You need to create the digits function.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "digits.h"
/* Main function. Runs test cases for the digits function.
 * Exits with failure code on first test case fail.
 * Otherwise exits with success.
 */

int digits(long n, int *max, int *min)
{
	int digit = 0;
       	int sum = 0;
	*max = 0;
	*min = 9;

	while(n > 0)
	{
		digit = n%10;	
		sum+=digit;
		if(*max < digit)
		{
			*max = digit;
		}
		if(*min > digit)
		{
			*min = digit;
		
		}
		//printf("%d\n", digit);
		//printf("%ld\n", n);
		n = (n/10)-(digit/10);
	}
	return sum;
	
}
