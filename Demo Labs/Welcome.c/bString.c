/*
Onawa Lanier
4.2.19
Strings Starting with 'b'
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char array[100] = {0};                      //declare char array for string

    int i = 0, j, count = 0, len = 0;           //declare iterator i, j, count and length variables
    printf("Enter a string: \n");               //prompt user for string, scan
    scanf("%100[^\n]c", array);                 //reads in a line of up to 100 characters
    len = strlen(array);                        //set length of string
    printf("All words that start with 'b':  \n");   

    while(array[i] != '\0')                     //while loop to traverse string

    {
        if((i == 0) && array[i] == 'b')         //if first word starts with b
        {
            j = i;
            while(array[j] != ' ')              //while index is not a space
            {
                printf("%c", array[j]);         //print the word char by char
                j++;
            }
            printf(",");
        }
        if((array[i] == ' ')&&(array[i+1] == 'b'))  //if index of string is a space and next position is b
        {
            j = i + 1;                           //current index is the next index
            while(array[j] != ' ' && j < len)    //while current index is not a space and is less than length
            {
                printf("%c", array[j]);          //print char
                j++;
            }
            printf(",");
        }
        i++;
    }
}

