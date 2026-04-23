#include<stdio.h>

int addition(int A, int B);             //declaration

int main()
{
    int x = 0;
    int y = 0;

    printf("Enter value 1 : ");
    scanf("%d",&x);
    printf("Enter value 2 : ");
    scanf("%d",&y);

    int z = addition(x,y);                      //function call by value
    printf("Addition is : %d",z);

    return (0);
}

int addition(int A, int B)              //defination
{
    int result = 0;
    
    result = A + B;
    return (result);
}
