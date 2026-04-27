#include<stdio.h>
#include<fcntl.h>
// #include<unistd.h>

int main()
{
    int ret = 0;
    int fd = 0;

    char arr[50];

    fd = open("Info.txt", O_RDONLY);
    
    if(fd == -1)
        puts("FAILURE");
    
    else 
    {
        puts("File OPENED");
        printf("Value of File Descriptor : %d\n", fd);

        ret = read(fd, arr, 11);

        arr[ret] = '\0';   

        printf("Data : \n%s\n", arr);
        printf("Bytes read : %d\n", ret);
    }

    puts("SUCCESS!");
    close(fd);

    return 0;
}