//Onawa Lanier
//8Feb2019
//perfLab7.3B
//Practice working with a while loop

    /*Initialize a NUL terminated char array with multiple phrases separated by newlines (\n).
    Test the char array with puts().
    Write a WHILE loop that only prints the first line AND stops at a NUL character

NOTE: Stopping at the null character is a safety measure that accounts for arrays lacking a new line*/
#include <stdio.h>

int main()
{
    char werds [] = {"Overthinking\na\nwhile\nloop\n\0"}; //a phrase in a loop
    int Position = 0; 
    //puts(werds); //test case
    while(werds[Position] != '\n' && werds[Position] != '\0') //
    {
        printf("c%", werds[Position]);
        if(werds[Position] == '\n')
        {
            break;
        }
        Position++;
    }
}
