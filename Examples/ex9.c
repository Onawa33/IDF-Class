#include <stdio.h>
#include <string.h>

int main()

{
    char buff[15];
    int pass= 0;

    printf("Enter the password: ");
    gets(buff);

    if(strcmp(buff, "pass1234"))
    {
        printf("Wrong password");
    }
    else
    {
        printf("Correct password");
        pass = 1;
    }
    if(pass)
    {
        printf("Root privileges");
    }
    return 0;
}