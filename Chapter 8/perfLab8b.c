//Onawa Lanier
//12 Feb 2019
//perfLab8b
//This program utilizes a header that calls a function and returns a value

/*Utilize MyStringHeader.h from the demo lab
    Add the following to MyStringHeader.h

int reverse_it(char * forwardString, int strLen);

    Return Value
        0 on success
        -1 forwardString is NULL
        -2 if strLen is zero or less
    Parameters - A non-NULL terminated string and the length of that string
    Purpose - Print a non-null terminated string backwards and then print a newline
        Write a program that reads a string from user input, call reverse_it(), and then call print_the_count()
        When satisfied, run "Unit Test Code 2.c"*/
#include <stdio.h>
#include <string.h>
#include "MyStringHeader.h" //inputs my header

int main()
{
    char display[256] = {0}; //initializes a char array for output
    char *userInput = {display}; //pointer array for transfer between header files

    printf("Please input a phrase so I can reverse it ((flip*mode))\n");
    scanf("%255[^\n]c", display); //stores user chars (string won't work)

    int strLength = strlen(display); //initializes and stores the length

    reverse_it(userInput, strLength); //calls reverse function
    printf("Here's your flipped string: %s\n", display);
}
