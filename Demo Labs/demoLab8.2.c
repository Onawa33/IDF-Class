//Onawa Lanier
//Feb2019
//Remove Newline

#include <stdio.h>

int remove_newline(char * buff); //initializes function for removing \n

int main()
{    
    char buff[255] = {"This\nis\na\nstring\n\0"}; //initializes a string
    int changeCount = 0; //variable for counting changed newlines
    changeCount = remove_newline(buff); //calls function and passes a char pointer to the array
    if(changeCount == 0) //prints error if function returns zero
    {
        printf("ERR_NONE_FOUND");
    }
    printf("There were %i newlines changed\n", changeCount);

    return 0;
}

int remove_newline(char * buff) //function call with return of char to buff array
{
    int Position = 0;
    int changeCount = 0;
    if(buff[Position] == '\0') 
    {
        printf("ERR_NULL_POINTER");
    }

    while(buff[Position] != NULL) //iterates through the buff array looking for newlines
    {
        if(buff[Position] == '\n')
        {
            buff[Position] = " "; //changes newline to a space
            changeCount++;
        }
        Position++;
    }
    
    return changeCount;
}