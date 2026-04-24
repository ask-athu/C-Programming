#pragma pack(1)
#include<stdio.h>

struct Demo             // Sizeof(Demo) = (4 + 1 + 4) + Padding ==> Mostly 12 (4-4-4)
{
    int x;
    char y;
    float z;
};

int main()
{
     struct Demo obj1;
     int x = sizeof(obj1);

     printf("Size of obj1 : [%d]",x);

     return(0);
}

// Output :
/*
    Bcuz of #pragma pack(1) 
    No standard spacing, removes padding -> (1+1+1.... till = 9)
*/

