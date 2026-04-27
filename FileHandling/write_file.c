#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int ret = 0;
    char arr[] = "HELLO WORLD";         // EASY WAY To make string in C;
    fd = open("Info.txt",O_RDWR);

    if (-1 == fd)
    {
        puts("FAILURE");
    }

    else 
    {
        puts("FILE OPENED");
        printf("Value of FD : %d",fd);

        ret = write(fd,arr,7);      // Writes only 7 Bytes from arr[] ie - HELLO W
        // Also sizeof Info.txt -> 7 Bytes! check in file's properties.

        printf("No. of Bytes written : %d \n",ret);        // Output : ret = 7 (Conceptually) 
    }
    puts("SUCCESS! CLOSING FILE");
    close(fd);

    return(0);
}