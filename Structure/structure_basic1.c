#include<stdio.h>

struct Demo
{
    int i;
    float j;
    double k;
};

int main()
{
    struct Demo obj1;

    obj1.i = 10;
    obj1.j = 10.0f;
    obj1.k = 10.00;

    puts("Object 1 Members via dot operator : ");
    printf("Obj1.i : [%d]\n",obj1.i);
    printf("Obj1.j : [%f]\n",obj1.j);
    printf("Obj1.k : [%lf]\n",obj1.k);

    struct Demo obj2;
    struct Demo *ptr = &obj2;

    ptr -> i = 11;
    ptr -> j = 11.11f;
    ptr -> k = 11.11111;

    puts("Object 2 Members via arrow operator :");
    printf("ptr->i : [%d]\n",(ptr->i));
    printf("ptr->j : [%f]\n",(ptr->j));
    printf("ptr->k : [%lf]\n",(ptr->k));


    return(0);
}