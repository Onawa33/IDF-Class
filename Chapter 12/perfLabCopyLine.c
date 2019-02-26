/*
File I/O – fputs()

“Content Copy”

Open an existing file in read mode.
Open a new file in write mode.
Copy the existing file into the new file line-by-line.
Close the existing file.
Close and open the new file in read mode.
Print the new file line-by-line.
*/
/*
Onawa Lanier
25 Feb 2019

*/
#include <stdio.h>

int main()
{
    FILE *mySong, *newFile; //point to files locations
    char lineOfData[256] = {0}; //holds each line in file

    //mySong = fopen("mySong.txt", "r"); //opens existing file in read mode
    //newFile = fopen("Output.txt", "w"); //opens new file in write mode
    mySong = fopen("/home/student/Desktop/Class/Chapter 12/mySong.txt", "r"); //opens existing file in read mode
    newFile = fopen("/home/student/Desktop/Class/Chapter 12/Output.txt", "w"); //opens and names a new file in write mode

    if(mySong != NULL)
    {
        if(newFile != NULL)
        {
            while (!feof(mySong)) //Copies the existing file into the new file line-by-line
            {                
                fgets(lineOfData, 256, mySong); //puts a line of song into array
                fputs(lineOfData, newFile);        
            }            
        } 
         else
        {
            printf("ERROR WRITING TO FILE");            //Print write file ERROR
        }           
    }
    else
    {
        printf("ERROR READING FILE");                   //Print read file ERROR
    }

    fclose(mySong); //closes the existing file
    fclose(newFile); //closes new file
    newFile = fopen("/home/student/Desktop/Class/Chapter 12/Output.txt", "r");//closes and opens the new file in read mode
    while (!feof(newFile)) //while not at eof
    { 
        fgets(lineOfData, 256, newFile); //reads a line into lineOfData variable
                if(lineOfData != NULL) //If the char is a writeable character
                {
                    fputs(lineOfData, newFile); //puts the char in new file 
                    printf("%s", lineOfData); //prints new file char by char  
                }   
    } 
    printf("%s\n", lineOfData); //prints the new file line-by-line

    return 0;
}