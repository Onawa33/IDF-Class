/*
Onawa Lanier
4.3.19
Strings ending with 'ed'
*/
#include <stdio.h>
#include <string.h>

int edFinder(char * string);

int main()
{
    //Declare char array with hard coded string
    char * string[] = {"Travis", "children", "easy-baked", "oven"};

    for(int i = 0; i < sizeof(string) / sizeof(string[0]); i++)
    {
        edFinder(string[i]);
    }
}
int edFinder(char * string)
{
    //char1 = string[strlen(string) - 2] checks for 'e'
    //char2 = string[strlen(string) - 1] checks for 'd'
    char char1 = 'e';
    char char2 = 'd';

    if(char1 == string[strlen(string) - 2] && char2 == string[strlen(string) - 1])
    {
        printf("%s\n", string);
    }
}