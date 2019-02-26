/* 
Onawa Lanier
26 Feb 2019
Practice opening a file and reading char by char
*/
/*
File I/O – getc() “Mighty Morphin”

Save the lyrics for the Mighty Morphin' Power Rangers theme song into a text file.

Write a C program to:

Open the file in read-only mode
Read it char-by-char
Print each char as it is read
Close the file at the end
*/
#include <stdio.h>

int main()
{
    FILE *ranger; //holds the pointer to the file
    char lyrics; //char array holds chars

    ranger = fopen("/home/student/Desktop/Class/Chapter 13/MorphinLyrics.txt", "r");
    //opens file in read only

    if(ranger != NULL) //if file isn't empty
    {
            while(!feof(ranger)) //while not at the null terminator
            {
                lyrics = fgetc(ranger); //gets a char
                fputc(lyrics, stdout); //prints 
                //printf("%c", ranger); //prints a char
            }
            fclose(ranger); //closes file
    }
    else
    {
        printf("ERROR: Could not open file.\n");//prints error 
    }
    return 0;
}
