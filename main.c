#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    const int ARR_SIZE = 10;
    int arr_a[ARR_SIZE];
    int arr_b[ARR_SIZE];    
    int *a = arr_a;
    int *b = arr_b;
    int i;


    srand(time(0));


    for (i = 0; i < ARR_SIZE; ++i)
    { arr_a[i] = rand(); }

    arr_a[0] = 0;


    printf("arr_a[]:");
    for (i = 0; i < ARR_SIZE; ++i) 
    { printf(" %d", arr_a[i]); }
    printf("\n");


    b += ARR_SIZE;
    while (arr_b < b)
    { *(--b) = *(a++); } 


    printf("arr_b[]:");
    for (i = 0; i < ARR_SIZE; ++i)
    { printf(" %d", arr_b[i]); }
    printf("\n");

    return 0;
}