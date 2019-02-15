//Onawa Lanier
//7Feb2019
//DemoLab7.1
//practice if statments

#include <math.h>
#include <stdio.h>

int main(void)
{
    char werdShelf[255] = {0}; //initializes array with 255 elements

    printf("Say something with 33-125 characters:  ");

    scanf("%255[^\n]s", &werdShelf);  //inputs userinput to array

    //check for wrongness
    if (werdShelf[0] >= 32 && werdShelf[0] < 126)  //checks for length of char array
    {
        printf("Perfect. You said this:  %s\n", werdShelf[0]);
        return 0;
    }
    else 
    {
        printf("Say something else and make it from 33 to 125 characters, please.\n");
    }
    return 0;
}