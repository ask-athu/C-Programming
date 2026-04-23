// size modifiers are basically short and long, they alter sizeof(data_type) mostly primitive!

#include<stdio.h>

int main()
{
    int x1 = 10;
    short int x2 = 5;
    long int x3 = 15;
    long long int x4 = 150000;

    printf("Size of normal int is : %d Bytes\n",sizeof(x1));
    printf("Size of short int is : %d Bytes\n",sizeof(x2));
    printf("Size of long int is : %d Bytes\n",sizeof(x3));
    printf("Size of long long int is : %d Bytes",sizeof(x4));

    return (0);
}

/*
Output :
Size of normal int is : 4 Bytes
Size of short int is : 2 Bytes
Size of long int is : 4 Bytes       -> Depends on compiler/System.
Size of long long int is : 8 Bytes
*/