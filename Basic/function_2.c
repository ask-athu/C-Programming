#include<stdio.h>

int input();
int addition (int A, int B);
int subtraction (int A, int B);

int main()
{
    int no1 = input();
    int no2 = input();

    puts("Computing : ");

    int sum = addition(no1, no2);
    int diff = subtraction(no1, no2);

    printf("Addition is : %d \n",sum);
    printf("Subtraction is : %d \n",diff);

    return (0);
}

int input()
{
    int no = 0;

    printf("Enter value : ");
    scanf("%d",&no);
    return no;
}

int addition (int A, int B)
{
    int result = A + B;
    return result;
}

int subtraction (int A, int B)
{
    int result = A - B;
    return result;
}