/*
Onawa Lanier
20 Feb 2019
Practicing preprocessor directives by combing two string literals, storing into an array, and printing the array
*/
/*
Write a C program with preprocessor directives to:
Combine two string literals
Wrap those string literals in quotes
Define a constant buffer size of 64
Create an array:
Of standard buffer size
Assign the wrapped string literals to the array
Print the array
*/

#include <stdio.h>

#define STRINGIFY(x) #x //hash operator converts token to a string
#define MERGE(x, y) STRINGIFY(x##y) //double hash combines two string literals
#define QUOTIFY(x, y) "\""MERGE(x, y)"\"" //formats the combined strings with quotations
#define constBUF 64 //defines constant buffer size of 64
/* Could also do it this way
#define constBUF 64                               //buffer size of 64
#define STRING1 "SuPer"                           //defining my two strings
#define STRING2 "NoVa"                               
#define COMBINE_STRINGS STRINGLIT1 STRINGLIT2     //combines them without a space in between
*/

int main(void)
{   
    char theArray[constBUF] = {QUOTIFY({{SuPer, NoVa}})}; //calls quotify directive (which calls Merge, which calls Stringify) 
    // and stores the quotified strings into my array    
    puts(theArray); //prints the array
    
    return 0;
}

