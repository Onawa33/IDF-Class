/*Onawa Lanier
 4Feb2019
 perfLab4c
 */

#include <stdio.h>

int main(void)
{
    char userInput[10] = {0}; //initializes char array with 10 positions
    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput),stdin);
    printf("Your string is: ");
    fputs(userInput, stdout);

    return 0;
}