/*
CONDITONAL COMPILATION
Redefine EOF as 66 (without compiler warnings)
Use preprocessor directive(s) to:
Only compile in "release" and only compile if _INC_STDIO is defined
Prints the name of a MACRO and also print the integer value of that MACRO
Use a #else 'fall through' for ease of use and safety
Use your preprocessor directives on FOPEN_MAX, FILENAME_MAX, and EOF
*/
/* 
Onawa Lanier
20 Feb 2019
Conditionals in preprocessor directives
*/

#include <stdio.h>


#undef EOF //undefines EOF
#define EOF 66 //redefines EOF
#define STRINGIFY(x) #x //for turning tokens into string literals
#define _INC_STDIO 666 ///defines INC STDIO
#define MACRO 999 //defines an arbitrary macro

#ifdef _INC_STDIO //only compiles if this is true
int main()
{
    #ifdef MACRO
        printf("The macro is named: %s and size is: %d\n", STRINGIFY(MACRO), MACRO); //sends to become a string
    #endif

    #ifdef _INC_STDIO
        printf("_INC_STDIO is: %d\n", _INC_STDIO); //prints macro if it's defined
    #else
        printf("_INC_STDIO is undefined.\n"); //tells you if it's not
    #endif

    #if EOF == 66
        printf("%s size is: %d\n", STRINGIFY(EOF), EOF); //calls stringify and prints EOF name and size
    #else
        printf("No go on the EOF. \n"); //tells you if it's undefined
    #endif

    #if FOPEN_MAX > 16 //checks size of FOPEN_MAX
        printf("You should do less here. \n");
    #else
        printf("FOPEN_MAX is: %d\n That's great, thanks.\n", FOPEN_MAX);
    #endif

    #ifdef FILENAME_MAX
        printf("FILENAME_MAX is: %s", STRINGIFY(FILENAME_MAX), FILENAME_MAX); //if FILENAME is defined, prints it
    #endif
        return 0;
}
#endif