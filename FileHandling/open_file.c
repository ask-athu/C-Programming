#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Info.txt",O_RDWR);

    if(-1 == fd)
    {
        puts("FAILURE OPENING FILE");
    }
    else
    {
        puts("SUCCESS! FILE OPENED ");
        printf("Value of FD : %d",fd);
    }

    return(0);

}
