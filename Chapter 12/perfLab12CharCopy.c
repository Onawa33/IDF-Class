/*
File I/O – putc()

“Content Copy”

Open an existing file in read mode.
Open a new file in write mode.
Copy the existing file into the new file char-by-char.
Close the existing file.
Close and open the new file in read mode.
Print the new file char-by-char.
*/
/*
Onawa Lanier
26 Feb 2019
Purpose: copy content of a file to another file char by char
*/
#include <stdio.h>

int main()
{
    char character; //holds chars of text file
    FILE *ogFile, *newFile; //points to the location of the files
    ogFile = fopen("/home/student/Desktop/Class/Chapter 12/MorphinLyrics.txt", "r"); //sets the pointer to fopen function and opens in read only
    newFile = fopen("/home/student/Desktop/Class/Chapter 12/CharCopyOutput.txt", "w"); //points to and opens new file in write mode
if(ogFile != NULL)
{
    if(newFile != NULL)
    {
        while (!feof(ogFile)) //while not at eof
        {              
                character = fgetc(ogFile); //reads a char into character variable
                if(character >= 8) //If the char is a writeable character
                {
                    fputc(character, newFile); //puts the char in new file   
                }                    
        }
    }  
    else
    {
        printf("ERROR WRITING TO FILE.");
    }
}
else
{
    printf("ERROR READING FILE."); 
}
    fclose(ogFile);
    fclose(newFile);
    newFile = fopen("/home/student/Desktop/Class/Chapter 12/CharCopyOutput.txt", "r"); //opens in read only
    while (!feof(newFile)) //while not at eof
    { 
        character = fgetc(newFile); //reads a char into character variable
                if(character >= 8) //If the char is a writeable character
                {
                    fputc(character, newFile); //puts the char in new file 
                    printf("%c", character); //prints new file char by char  
                }   
    } 
    
    return 0;
}
