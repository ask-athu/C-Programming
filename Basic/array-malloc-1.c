#include<stdio.h>
#include<stdlib.h>

int main ( void )
{

    int n = 0;
    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Input array : via DMA \n");

    int *arr = malloc(n*sizeof(int));
    if ( arr == NULL )
    {
        printf("Memory allocation failed! \nExiting");
        return EXIT_FAILURE;
    }

    for ( int i = 0; i < n ; i++ )
    {
        printf("ELement at index [%d] : ",i);
        scanf("%d",&arr[i]);
    }

    puts("Printing array : ");

    for ( int i = 0; i < n; i++ )
    {
        printf("ELement at index [%d] : [%d]\n", i, arr[i]);
    }

    free(arr);
    return(0);
}