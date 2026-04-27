#include<stdio.h>
#include<fcntl.h>
// Incase of error use : #include<unistd.h>

int main()
{
    // Deleting Info.txt ( which we made via creat())

    unlink("Info.txt");
    puts("File Deleted Successfully! ");

    return (0);
}