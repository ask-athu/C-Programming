#include<stdio.h>

/*
    Q.
    1. Function to print array
    2. Fun() to Reverse array
    3. Fun() to find sum of array
    3. Fun() to swap 1st and last element of array.    
*/

void display_array(int size, int arr[]);
void reverse_array(int size, int arr[]);
int sum_array(int size, int arr[]);
void swap(int size, int arr[]);

int main()
{

    int arr[] = { 10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(int);

    puts("Displaying array : ");
    display_array(size, arr);

    puts("Displaying reverse array : ");
    reverse_array(size, arr);

    int result = sum_array(size, arr);
    printf("Displaying SUM of array : %d \n\n",result);

    puts("Displating array after SWAP : ");
    swap(size, arr);

    return (0);
}

void display_array(int size, int arr[])
{
    int *p = arr;

    for(int i = 0; i<size ; i++)
    {
        printf("[%d]\t",*p);
        p++;
    }
    puts("\n");

}

void reverse_array(int size, int arr[])
{
    int *p = &arr[size-1];

    for(int i = 0; i<size; i++)
    {
        printf("[%d]\t",*p);
        p--;
    }
    puts("\n");
}

int sum_array(int size, int arr[])
{
    int sum = 0;
    int *p = arr;

    for(int i = 0; i<size ; i++)
    {
        sum = sum + *p;
        p++;
    }

    return sum;
}

void swap(int size, int arr[])
{
    int *p = NULL;
    int *q = NULL;

    p = &arr[0];
    q = &arr[size-1];

    int tmp = 0;

    tmp = *p;
    *p = *q;
    *q = tmp;

    display_array(size, arr);
}