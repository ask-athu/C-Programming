#include<stdio.h>

int main()
{   
    int arr [5];

    int n = sizeof(arr)/sizeof(int);
    for(int j = 0; j<n ; j++)
    {
        *(arr+j) = j*10; 
    }

    for (int i = 0; i<n; i++)
    {
        printf("[%d] ",arr[i]);
    }

    return (0);
}