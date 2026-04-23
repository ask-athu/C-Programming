#include<stdio.h>

void pre_increment (int A, int B);
void post_increment (int A, int B);

void pre_decrement(int A, int B);
void post_decrement(int A, int B);

int main()
{
    // just increment operator
    puts("Showing 0 to 5 using i++ :");
    for(int i = 0; i<=5; i++)
    {
        printf("Value of i is : %d\n",i);
    }

    puts("Showing 0 to 5 using ++j :");
    for(int j = 0; j<=5; ++j)
    {
        printf("Value of j is : %d\n",j);
    }

    int X = 10;
    int Y = 0;

    printf("Original values : \nValue of X is : 10 \nValue of Y is : 0\n");
    puts("Displaying pre increment operator : ");
    pre_increment(X,Y);

    puts("Displaying post increment operator : ");
    post_increment(X,Y);

    puts("Displaying pre decrement operator : ");
    pre_decrement(X,Y);

    puts("Displaying pre increment operator : ");
    post_decrement(X,Y);
    

    return(0);
}

void pre_increment (int A, int B)
{
    int no1 = A;
    int no2 = B;

    no2 = ++no1;
    printf("Value of X is : %d\n",no1);
    printf("Value of Y is : %d\n",no2);

}

void post_increment(int A, int B)
{
    int no1 = A;
    int no2 = B;

    no2 = no1++;

    printf("Value of X is : %d\n",no1);
    printf("Value of Y is : %d\n",no2);

}

void pre_decrement(int A, int B)
{
    int no1 = A;
    int no2 = B;

    no2 = --no1;

    printf("Value of X is : %d\n",no1);
    printf("Value of Y is : %d\n",no2);
    
}

void post_decrement(int A, int B)
{
    int no1 = A;
    int no2 = B;

    no2 = no1--;

    printf("Value of X is : %d\n",no1);
    printf("Value of Y is : %d",no2);
    
}
