
/*
Onawa Lanier
    Read three ints, representing the date, from one line
    Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    Specify the field width of the output appropriately
*/
//scanf tells the program how to read the input, so tell the user how to input data


#include <stdio.h>

int main(void)
{
    int day = 0;
    int month = 0;
    int year = 0;

    int userInput = 0;
    printf("Input day, month, year in this format: mm-dd-yyyy: ");
    scanf("%2d-%2d-%4d", &month, &day, &year);
    printf("The date is: \n");
    printf("%2d/%2d/%4d \n", month, day, year);

    return 0;
    
}