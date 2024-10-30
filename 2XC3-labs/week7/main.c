#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "array_utilities.h"

int main()
{
    int a[] = {5,-4,12,23,5,2,2,5,1,5,5,5,5,5,5};
    int b[5][5] = {
        {5,5,5,5,5}, 
        {1,5,4,2,3}, 
        {2,3,5,4,1}, 
        {5,3,2,1,4}, 
        {3,5,2,4,1}
    };
    int size = sizeof(a) / sizeof(a[0]);
    for(int i = 0; i<100; i++)
    {
        int num = find_index(i, 5, a);
	    printf("%d", num);
        printf(",");
    }
    
    for(int j = 0; j<100; j++)
    {
        int *pointer = find_pointer(size, a, j);
        if (pointer != NULL) 
        {
            printf("Key %d FOUND %d\n",  j, *pointer);
        } else 
        {
            printf("Key %d NOT FOUND\n", j);
        }
    }
    int counter = count(size, a, 5);
    printf("Count1d: ");
    printf("%d\n", counter);
    int counter2d = count2d(5, 5, b, 5);
    printf("Count2d: ");
    printf("%d\n", counter2d);
}
