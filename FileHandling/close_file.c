#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = open("Info.txt",O_RDWR);

    if (-1 == fd)
    {
        puts("FAILURE");
    }

    else 
    {
        puts("FILE OPENED");
        printf("Value of FD : %d",fd);
    }

    close(fd);

    return(0);
}