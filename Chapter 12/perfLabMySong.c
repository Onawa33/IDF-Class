/*
File I/O – fgets() “Your Song”

Save your favorite song into a text file.

Write a C program to:

Open the file in read-only mode
Read it line-by-line
Print each line as it is read
Close the file at the end
*/
/* 
Onawa Lanier
25 Feb 2019
Opening a file with a song, printing it out, and closing it
*/

#include <stdio.h>

int main()
{
    FILE *mySong;  //holds the pointer to the file
    char lyrics[256]; //char array holds a line from the song

    mySong = fopen("/home/student/Desktop/Class/Chapter 12/mySong.txt", "r"); //reads file
    if(mySong != NULL)  //if there's somethign in the file
    {
        while(!feof(mySong)) //while not at the end of the file
        {
            fgets(lyrics, 256, mySong); //gets a line 
            printf("%s\n", lyrics); //prints a line
        }
        fclose(mySong); //closes file
    }
    else
    {
        printf("ERROR: File could not open.\n"); //prints error if something went wrong
    }
    return 0;
}


