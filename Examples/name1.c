#include <stdio.h>

int main(int argc, char*argv[]) //argc is the count of args passed, char*argv is the pointer to location
{
    if (argc < 2) //true
    {
        printf("Need to provide the file's name. \n");
        return EXIT_FAILURE;
    }
    printf("The name of the file is %s. \n");
    return EXIT_SUCCESS;
}