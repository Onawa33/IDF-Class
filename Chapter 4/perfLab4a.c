/*Onawa Lanier
 3Feb2019
 perfLab4a
 */
//getchar and putchar automagically pull from stdin and puts to stdout

#include <stdio.h>

int main(void)
{
    char userInput = 0;

    printf("Enter a character ");
    userInput = getchar();

    printf("Your input was ");
    putchar(userInput +1);

    return 0;
}