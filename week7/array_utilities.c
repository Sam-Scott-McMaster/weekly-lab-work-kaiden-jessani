#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "array_utilities.h"

void Array(int a[], int size)
{

}

void ArrayVariableLength(int n, int a[n])
{

}

int find_index(int num, int n, int array[n])
{
    for (int i = 0; i<n; i++)
    {
        if(array[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int* find_pointer(int size, int *a, int key)
{
    for (int *num = a; num<size+a; num++)
    {
        if(*num == key)
        {
            return num;
        }
    }
    return NULL;
}

void print_array(int *arr, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int count(int size, int *arr, int key) {
    int counter = 0;
    int *p = find_pointer(size, arr, key);
    while (p != NULL) {
        counter++;
        size -= (p - arr + 1);
        arr = p + 1;  
        p = find_pointer(size, arr, key);
    }
    return counter;
}

int count2d(int a, int b, int arr[a][b], int key)
{
    int counter = 0;
    for(int i = 0; i<a; i++)
    {
        counter += count(b, arr[i], key);
    }
    return counter;
}