/*
Onawa Lanier
March 19 2019
Prompt #1 Searching for Substrings
Program inputs a line of text and a search string from the keyboard. Using function strstr, locate the first occurence of the search
string in the line of text, and assign the location to variable searchPtr of type char *. If the search string is found, print the 
remainder of the line of text beginning with the search string. Then use strstr again to locate the next occurence of the search 
string in the line of text. If a second occurence is found, print the remainder of the line of text beginning with the second occurence.
(HINT: The second call to strstr should contain searchPtr + 1 as its first argument.)
*/

#include <stdio.h>
#include <string.h>


void substringSearch(char *string, char *sub); //Function declaration sends string and substring, returns nothing
int clear_input();

int main()
{
    char userString[256] = {0};     //Stores string input
    char userSearch[256] = {0};     //Stores search word input
    char key[4] = {"idf"};          //The decryption key
    char userInput[256] = {0};      //Stores user key input

    printf("Enter some characters, a phrase, or jibberish: ");
    fgets(userString, sizeof(userString), stdin);   //Stores user string and its size
    if(userString[0] == '\n')                       //If the first character is a new line
    {
        printf("No string entered. Try again.\n");  //Ask them to try again
        return 0;
    }
    
    printf("Enter search character(s): ");
    fgets(userSearch, sizeof(userSearch), stdin);   //Stores user search and its size
    char *pos = strchr(userSearch, '\n');           //hacky way to get rid of \n at end of string(from fgets())
    if(pos) *pos = 0;                               //Sets location of \n to 0

    if(userSearch[0] == '\n')                       //Error handling
    {
        printf("No search character entered. Try again.\n");
        return 0;
    }

    int loop = 0;
    while(loop != 1)                                //password check
    {
        printf("Enter Key: ");
        scanf("%s", userInput);

        if(strcmp(key, userInput) == 0)             //compares user input and password
        {
            loop = 1;
            substringSearch(userString, userSearch);//calls search function if correct
        }
        else
        {
            printf("Incorrect password, please try again.\n");
        }
    }       
}


void substringSearch(char *string, char *sub)       //REceives and searches for search word, prints results, returns nothing
{
    char *searchPtr;                                //Declare char pointer
    searchPtr = strstr(string, sub);                //Set it to the location of search word

    if(searchPtr != NULL)                           //If searchword is found
    {
        printf("First Appearance of %s: ", sub);    //Print the resulting substring
        printf("%s\n", searchPtr);

        searchPtr = strstr((searchPtr + 1), sub);   //Search for possible occurence.

        if(searchPtr != NULL)                       //If searchword is found again
        {
            printf("Second Appearance of %s: ", sub);   //Print second substring
            printf("%s\n", searchPtr);
        }
    }
    printf("First Appearance of %s: ", sub);    //Print the resulting substring
        printf("%s\n", searchPtr);
}