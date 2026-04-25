#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[100];   // BUFFER LIMIT

    for (int i = 0; i < n; i++)
    {
        printf("Element at index [%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Printing array : \n");

    for (int i = 0; i < n; i++)
    {
        printf(" Element at index [%d] : [%d] \n", i, arr[i]);
    }

    return (0);
}