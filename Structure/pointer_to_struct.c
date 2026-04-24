#include<stdio.h>

struct Demo{
    int rno ;
    float marks ; 
}*ptr ;

int main()
{
    struct Demo obj1 ;
    ptr = &obj1;
    
    ptr -> rno = 1;
    ptr -> marks = 89.0f;

    printf("Marks and rno of student 1 : [%d] : [%f]\n",ptr->rno, ptr->marks);

    struct Demo obj2;
    ptr = &obj2;

    ptr -> rno = 2;
    ptr -> marks = 56.0f;

    printf("Marks and rno of student 1 : [%d] : [%f]",ptr->rno, ptr->marks);

    return(0);
}