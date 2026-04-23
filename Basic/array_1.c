#include<stdio.h>

int size = 5;

void create_array(int size, int arr[]);
void display_array(int size, int arr[]);

int main()
{
    int arr[5];

    puts("Creating array:");
    create_array(size, arr);

    puts("Displaying array:");
    display_array(size, arr);

    return 0;
}

void create_array(int size, int arr[])
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = (i + 1) * 10;
    }
}

void display_array(int size, int arr[])
{
    for(int i = 0; i < size; i++)
    {
        printf("Element at index %d is: [%d]\n", i, arr[i]);
    }
}
