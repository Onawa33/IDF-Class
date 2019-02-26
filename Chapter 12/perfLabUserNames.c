/*
File I/O – fprintf()
“Usernames”
Prompt the user for the number of students.
Read the first, middle, and last name for each student.
Remove any newline characters from all strings.
Append each name to a “class roster” file in the following format:
For George Herbert Dubya Bush, write the following to the the file...George H. Dubya Bush has a username of ghdbush.
BUILD THOSE SAFETY CHECKS!!!!!a
*/
//Onawa Lanier
//26 Feb 2019
//Practicing File IO

#include <stdio.h>
#include <ctype.h>

int main()
{
    int numStu = 0;
    char fName [45] = {0};
    char mName [45] = {0};
    char lName [45] = {0};
    char username [45] = {0};

    FILE *fptr;

    fptr = fopen("./class_roster.txt", "a"); //opens and appends file

    if(fptr != NULL)
    {

        printf("Please enter the number of students on the roster: \n"); //gets number of students from user, stores to variable
        scanf("%d",&numStu); //Get the Number of students 

        printf("Please enter student's name (first middle last) for:\n");

        //for every student
        for(int i = 0, count = 0; i < numStu; i++, count = 0)
        {
            printf("Roster #%d: ",i + 1);                       //Show what Roster number we are on
            scanf("%45s %45s %45s", fName,mName,lName);         //Pull in the first,middle, and last names
            username[0]= tolower(fName[0]);                     //make the first username value to be equal to a lower case first char of first name
            username[1]= tolower(mName[0]);                     //make the second username value to be equal to a lower case first char of middle name
            while(lName[count] != '\0')                         //while there are still letters
            {                 
                username[count + 2] = tolower(lName[count]);    //Add every letter of the last name lower case to the username
                count++;
            }

            //Save this into the file
            fprintf(fptr,"%s %c. %s has a username of %s\n",fName,mName[0],lName,username);
            username [45] = 0;
        }
    }
    else
    {
        printf("ERROR OPENING FILE");                           //File openeing ERROR
    }
    return 0;
}

/*
#include <stdio.h>

int main(){
    FILE *pFile;

    pFile = fopen("C:/Users/CMT Instructor/Desktop/info.txt", "a");

    if(pFile!=NULL){
        char name[20]="Pete Smith";
        float gpa = 3.4f;

        fprintf(pFile,"%s, %f\n", name, gpa);
        printf("The data has been recorded.");
        fclose(pFile);
    }
    else{
        printf("File Error");
    }

    return 0;
}
*/