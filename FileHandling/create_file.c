#include<stdio.h>
#include<fcntl.h>       // fcntl = File Control .h --> For File I/O ops

int main()
{
    int fd = 0;
    fd = creat("Info.txt",0774);
    // int mode -> 0774 : 0 indicates Octal numbering system, 7 for Owner rights, etc...

    if (-1 == fd)
    {
        puts("Unable to create file. ");
    }
    else
    {   
        puts("File Created via File Descriptor.");
        printf("Value of File Descriptor : %d",fd);
    }
    

    return(0);
}