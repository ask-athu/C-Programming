#include<stdio.h>

// To check how is name of array internally treated as its base address ( address of first element )
// Usage : arr[0]  --> * (&arr[0])

static int size = 0;    // Size variable
char arr[10];           // MAX BUFFER LIMIT

void input_array(int size, char *arr);
void display_array(int size, char *arr);

int main()
{
    printf("Enter size of array : ");
    scanf("%d",&size);

    input_array(size, arr);
    display_array(size, arr);

    return (0);
}

void input_array(int size, char *arr)
{
    puts("Input Array () : ");
    int i = 0;

    for (i = 0; i<size ; i++)
    {
        printf("Enter Element at index [%d] : ",i);
        scanf(" %c",(arr+i));                           // Use space %c ( As character also includes whitespaces and new line ).
    }

    puts("EXITING INPUT_ARRAY() ");

}

void display_array(int size, char *arr)
{
    puts("Display_Array()");
    int j = 0;

    for(j = 0; j<size ; ++j)
    {
        printf("Element at Index [%d] : [%c] \n",j, *(arr+j));
    }

    puts("EXITING DISPLAY_ARRAY() ");

}