

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *age; //points to the value of that memory address

    age = (int *)malloc(sizeof(int) *1); //*1 allocates one byte

    if(age == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }

    printf("How old are you in years?\n");
    scanf("%d", age);
    *age *= 7;
    printf("You are %d years old in dog years.", *age);
    free(age); //frees up memory after printing

    return(0);
}
