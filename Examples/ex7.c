#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year you want to check: \n");
    scanf("%d", &year);

    //leap year conditions
    if(year % 4 == 0) //if year is divisible by 4 with no remainder
    {
        if(year % 100 == 0) //is year is divisible by 100 with no remainder
        {
            if(year % 400 == 0)
            {
                printf("%d is a lear year\n", year);
            }
            else
            {
                printf("%d is not a leap year\n", year);
            }            
        }
        else printf("%d is not a leap year\n", year);
    }
    else printf("%d is not a leap year\n", year);

    return 0;
}