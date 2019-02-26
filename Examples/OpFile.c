
#include <stdio.h>


int main()
{
FILE *pFile;
char input[81];

pFile = fOpen("C:.........txt" "r"); //file to "r" read

if(pFile != NULL)
{
    //process files
    while(!feof(pFile)) //whule not at end of file
       {    fgets(input, 81, pFile); //gets file as a string
      printf("%s", input);
       }
       fclose(pFile);
}

else
{
    printf("IO error: problem with file");
}
}
