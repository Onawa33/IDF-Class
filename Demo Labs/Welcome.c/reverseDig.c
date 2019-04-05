/*
Onawa Lanier
4.2.19
Reversing Digits
*/

#include <stdio.h>
#include <string.h>

void reverse(char *array);              //Declare function

int main()
{                                        
    int userInt = 0;                    //Declare variables
                                          
    char array[10] = {0};              //Declare pointer array

    int * newArr[10] = {0};             //Declare new array for reversed integers

                                        //Declare function Reverse() that takes a pointer to an array
   
                                        //get user int, scan in as char array
    printf("Input an integer from 1 to 1000:  \n");
    scanf("%s", array);
    reverse(array);

    printf("%s", array);  //Print result    
}


                                        //Reverse function definition
void reverse(char *array)
{
   char temp;

   for(int i = 0, j = strlen(array)-1; i <= j; i++, j--)     //Loop through array from end to beginning
   {   
     temp = array[j];
     array[j] = array[i];               //switch positions, puts value of i into j
     array[i] = temp;
   }
    return;                     
}



