/*
    Read a string into a char array
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for the null-terminator
    Stop reading at the first capital letter or new line
*/

#include <stdio.h>

int main(void)
{
    char myString[20] = {0};

    printf("Enter your word: ");
    scanf("%19[^[A-Z\n]]s", myString); //specifies field width (19) for safety bc it leaves room for the null terminator
    //stops reading after first line or capital letter
    printf("Your word was: %s\n", myString);
    //putc(myString, stdout);

    return 0;
}