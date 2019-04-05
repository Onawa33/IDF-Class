/*
Onawa Lanier
4.2.19
Counting Occurrences of a Character
*/

#include <stdio.h>
#include <string.h>

char search(char string, char ch);

void main()
{
    char string[100] = {0};
    char ch = 0;

    printf("Please input a string:  \n");
    scanf("%s", &string);

    printf("Please input a character to search string for:  \n");
    scanf("%c", &ch);

    search(string, ch);
}
    char search(char string, char ch)
    {
        int count = 0;
        char temp = 0;

        do
        {
            temp = strchr(string, ch);
        }
        while (temp != NULL);

        printf("")
    }

//declare variables
//prompt user input string, scan
//prompt user input char to search for, scan
//call char count function, pass user string and char
//initialize counter variable and temp char
//do  temp = strchr(userString, char)
//increment counter
//while temp != NULL
//return count
//print count