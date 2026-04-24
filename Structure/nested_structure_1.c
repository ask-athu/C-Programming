#include <stdio.h>

struct Demo
{
    int rno;

    struct marks
    {
        float maths;
        float sci;
        float evs;
        char result;
    } marks;

} *dptr;

int main()
{
    struct Demo obj1, obj2;

    // Student 1
    dptr = &obj1;

    dptr->rno = 1;
    dptr->marks.maths = 70.0f;
    dptr->marks.evs = 56.0f;
    dptr->marks.sci = 88.0f;
    dptr->marks.result = 'P';

    printf("Marks of Student 1:\n");
    printf("Roll No: %d\n", obj1.rno);
    printf("Marks:\nMaths: %f\nScience: %f\nEVS: %f\n",
           obj1.marks.maths, obj1.marks.sci, obj1.marks.evs);

    if ('P' == dptr->marks.result)
        puts("Result: PASS");
    else if ('F' == dptr->marks.result)
        puts("Result: FAIL");
    else
        puts("NA");

    // Student 2
    dptr = &obj2;

    dptr->rno = 2;
    dptr->marks.maths = 30.0f;
    dptr->marks.evs = 26.0f;
    dptr->marks.sci = 38.0f;
    dptr->marks.result = 'F';

    printf("\nMarks of Student 2:\n");
    printf("Roll No: %d\n", obj2.rno);
    printf("Marks:\nMaths: %f\nScience: %f\nEVS: %f\n",
           obj2.marks.maths, obj2.marks.sci, obj2.marks.evs);

    if ('P' == dptr->marks.result)
        puts("Result: PASS");
    else if ('F' == dptr->marks.result)
        puts("Result: FAIL");
    else
        puts("NA");

    return 0;
}