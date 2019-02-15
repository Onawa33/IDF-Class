


#include <stdio.h>
#include <string.h>
#define ERR_NULL_POINTER -1		                // Error:  Pointer passed was NULL
#define ERR_NONE_FOUND 0		                // Error:  Character not found
#define ERR_FIND_EQUALS_REPLACE -2              // Error:  Character printed and replaced are equal to each other
#define ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable


int replace_char(char * buffer, char findChar, char replaceChar); //initializes replacement function, 3 chars as arguments
int clearInput();

int main(void)
{
	/* FUNCTION INPUT ARRAYS */
	char firstArray[256] = {0}; //initializes an array
	char *secondArray[] = {firstArray}; //fills second array with first array to go to function for changing

    char userChar = 0; // Character to replace
    char replaceChar = 0; // Character replacing userChar
    int tempResults = 0;

    printf("Program: Healthy Substitutions. Press enter to continue!");
    clearInput();
    printf("What character would you like replaced?\n");
    fscanf(stdin, "%255[^\n]c", &userChar); //scans user input into userChar variable
    printf("What character would you like to replace character %c with?\n", userChar);
    clearInput();
    fscanf(stdin, "%c %c", &userChar, &replaceChar); //scans and stores user choices

    // Implement for loop here for multiple strings
    tempResults = replace_char(firstArray[0], userChar, replaceChar);//calls function with 3 arguments

    // Check for errors
    if (tempResults > 0)//prints all changes made if no errors
    {
        printf("\n\n\nThe new string is: \n");
        printf("%s\n", firstArray[0]);
        printf("There were %d instances of %c replaced with %c.\n", tempResults, userChar, replaceChar);
    }
    else if (tempResults == ERR_NULL_POINTER)
    {
        printf("The string was empty");
    }
    else if (tempResults == ERR_NONE_FOUND)
    {
        printf("There were no instances of that character");
    }
    else if(tempResults == ERR_FIND_EQUALS_REPLACE)
    {
        printf("The character to replace was the same as the replace character");
    }
    else
    {
        printf("One of the characters entered were not printable");
    }

	return 0;
}

/*
 * FUNCTION:   int replace_char(char * buffer, char findChar, char replaceChar)
 *
 * ARGUMENTS:  -buffer is a pointer to a null-terminated string
 *              The string is passed by reference and modified in place
 *              -findChar is a char to be found in the string
 *              -replaceChar is the char to replace the findChar
 *
 * RETURNS:	   Number of characers replaced
 *             ERR_NULL_POINTER if buffer == NULL
 *             ERR_NONE_FOUND if no newlines are found
 *             ERR_FIND_EQUALS_REPLACE -2              // Error:  To replace and replace are equal to each other
 *             ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable
 *
 * NOTES:      This function replaces instances of a userinputted character with another user inputted char
 */
int replace_char(char * buffer, char findChar, char replaceChar) //function for replacing chars
{
    int changeCount = 0; //counts changes
    int index = 0; //Counts index

    //error handling
    if(buffer == NULL)
    {
        return ERR_NULL_POINTER;
    }
    else if(findChar == replace_char)
    {
        return ERR_FIND_EQUALS_REPLACE;
    }
    else if(findChar <= 32 || findChar > 126)
    {
        return ERR_NON_PRINTABLE_CHARACTER;
    }
    //loops through the length of string input
    for(int i = 0; i < strlen(buffer); i++)
    {
        //replaces user input with alternate character of user choice
        if(buffer[i] == findChar)
        {
            buffer[i] = replace_char;
            changeCount++;
        }
        index++;
    }
    //checks for no characters in string
    if(index==0)
    {
        return ERR_NONE_FOUND;
    }
    return changeCount; //this returns number of changes made
}


// This is an awesome function and useful if you need to clear the input buffer
int clearInput()
{
    while ( getchar() != '\n' );
}