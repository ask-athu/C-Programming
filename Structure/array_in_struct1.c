#include<stdio.h>

struct Demo
{
    int x ;
    int arr[3] ;
    char z ;
};

int main()
{
    struct Demo obj1;
    struct Demo *ptr = NULL;

    ptr = &obj1;

    ptr -> x = 1;
    ptr -> arr[0] = 17;
    ptr -> arr[1] = 21;
    ptr -> arr[2] = 23;
    ptr -> z = 'A';

    for (int i = 0; i < 3; i++)
    {
        printf("Object Array element [%d] : [%d]\n",i,ptr->arr[i]);
    }

    puts("Size of struct Demo is : ");
    printf("%d",sizeof(struct Demo));

    

    return(0);
}