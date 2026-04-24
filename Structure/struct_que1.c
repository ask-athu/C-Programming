#include <stdio.h>

// To create and get struct input values by user via function

struct Student
{
    int rollNo ;
    int marks[3];
} *ptr;

void getinfo(struct Student *ptr);
void display(struct Student *ptr);

int main()
{
    struct Student obj1;
    // struct Student *ptr = NULL ;

    getinfo(&obj1);
    display(&obj1);

    return (0);
}

void getinfo(struct Student *ptr)
{
    puts("Inside getinfo()");
    puts("Enter ROll NO : ");
    scanf("%d",&ptr->rollNo);

    int j = 0;

    puts("Enter Marks : ");

    for (int i = 0; i < 3; ++i)
    {
        printf("Subject %d Marks : ",i+1);
        scanf("%d",&ptr->marks[i]);
    }

    puts("Exiting getinfo()");
}

void display(struct Student *ptr)
{
    printf("Roll No : %d",ptr->rollNo);
    int j = 0;
    
    for(int i = 0; i<3 ; ++i)
    {
        printf("Subject %d Marks : [%d]\n",i+1,ptr->marks[i]);
    }
}
