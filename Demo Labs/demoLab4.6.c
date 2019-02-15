/*
Onawa Lanier
Formatting and printing IO
*/
//Formatted IO

#include <stdio.h>

int main(void)
{
    printf("#1  %f This is your float\n", 1.2);
    //plus sign means it's a signed integer
    printf("#2  %+8.4f is \n", -1.798);
    printf("#3  %7.2f\n", 0.987654321);
    printf("#4  %-6.1f is yours\n", 13.37);
    printf("#5  Yours is %05.2f\n", 1.2345);
    printf("#6   %s\n", "Hello World!\0");
    printf("#7  %9.5s\n", "Hello World!\0");
    printf("#8  %016.11s\n", "Hello World!\0");

    return 0;
}