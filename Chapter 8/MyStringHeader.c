// MyStringHeader.c
//
#include <stdio.h>
#include <ctype.h>

#define ERR_NULL_POINTER -1;        // string is null
#define ERR_INVALID_LENGTH -2;      // string length is zero or less

extern int reverse_it(char * forwardString, int strLen)
{
    if (!forwardString) //error checking
    {
        return ERR_NULL_POINTER;
    }
    else if (strLen <= 0)
    {
        return ERR_INVALID_LENGTH;
    }
    char tempStr[255] = {0}; //initializes temporary string array
    int Counter = 0; 

    for(int i = 0; forwardString[i] != '\0'; i++) //iterates through input string until null terminator
    {
        tempStr[i] = forwardString[i];//stores chars into temp string
        Counter++;
    }

    int x = 0;
    for(int i = (Counter-1); i >= 0; i--)//loop starts at the end of the string, 
    //before the null terminator, and moves backwards to input the temp into the forward string
    {
        forwardString[x] = tempStr[i];
        x++;
    }
    return 0;
}