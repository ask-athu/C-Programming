#include<stdio.h>

int main()
{
    int x = 10;
    int *p = &x;
    int **ptr = &p;

    printf("Value of x via pointer p is : %d \n", *p);
    printf("Value stored in pointer p is : %p \n", p);

    printf("Value of x via double pointer ptr is : %d \n", **ptr);
    printf("Value stored in pointer ptr is : %p \n", ptr);

    printf("Value stored in *ptr is : %p \n", *ptr);

    int arr[] = {10,20,30};
    int *pp = arr;

    printf("\n%d %d %d\n", *pp, *pp+1, *(pp+1)); // 10 11 20

    return 0;
}