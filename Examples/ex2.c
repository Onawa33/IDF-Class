//if/else statement
#include <stdio.h>

int main()
{
    float num;
    printf("Enter a number: \n");
    scanf("%f", &num);

    if(num < 0.0)
    {
        printf("Enter a positive number.\n");
    }
    else if(num > 0.0)
    {
        printf("You have entered a positive number.\n");
    }
    else
    {
        printf("You have entered zero.\n");
    }
}