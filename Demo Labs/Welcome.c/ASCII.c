/*
Onawa Lanier
4.2.19
Printing Letters for Various ASCII Codes
*/
#include <stdio.h>
#include <string.h>

void toASCII(char userInput);     //function declaration

int main()
{
//declare variables
char userInput = 0;

//prompt user for input character, scan
printf("Please input a single character to be converted to ASCII:  \n");
scanf("%1c", &userInput);       //error handling

toASCII(userInput);
}

void toASCII(char userInput)
{
    printf("%c = %d\n", userInput, userInput);
    return;
}

//print the int as ASCII character