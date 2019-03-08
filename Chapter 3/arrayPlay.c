/* 
Onawa Lanier
30Jan2019
Lab3B
Defines each element of an array and prints
*/

#include <stdio.h>
#include <string.h>


int main(void)

{
    char myWords[256] = {0};//declares a char array with 256 elements

         myWords[0] = 'P';
         myWords[1] = 'r';
         myWords[2] = 'o';
         myWords[3] = 'g';
         myWords[4] = 'r';
         myWords[5] = 'a';
         myWords[6] = 'm';
         myWords[7] = 'm';
         myWords[8] = 'i';
         myWords[9] = 'n';
         myWords[10] = 'g';
         myWords[11] = 32;
         myWords[12] = 'a';
         myWords[13] = 'n';
         myWords[14] = 'd';
         myWords[15] = '.';
         myWords[16] = '.';
         myWords[17] = '.';
         myWords[18] = '\0';

         printf("%s\n", myWords);
         printf("My pharse length is %d", strlen(myWords));

         //I'm pretty sure this needs a loop

         return 0;
}