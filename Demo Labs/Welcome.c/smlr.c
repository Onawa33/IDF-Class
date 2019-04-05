// write a program to input an array of n numbers and then find the smallest number
// declare and initialize array and variables
// prompt user for desired number of elements
// scan user input
// prompt user for array values
// scan user inputs
// store first value into temp variable to compare
// for loop through user input	
	// if temp > next value, replace temp   
// print temp value(it should be the smallest number) 

#include <stdio.h>

int main(void)
{
    // declare and initialize array and variables
    int userInput[256] = {0};
    int elements = 0;
    int temp = 0;

    // prompt user for desired amount of elements
    printf("Enter number of elements in the array: \n");
    // scan user input
    scanf("%d", &elements);

    // prompt user for array values
    printf("Enter array values, separated by a space: \n");
    // scan user input and load into array
    for(int i = 0; i < elements; i++)
    {
        scanf("%d", &userInput[i]);
    }

    // store first value into temp variable to compare
    temp = userInput[0];

    // for loop through user input
    for(int j = 0; j < elements; j++)
    {
        // if temp > next value, replace temp
        if(temp > userInput[j])
        {
            temp = userInput[j];
        }     
    }
    // print temp (the smallest number)
    printf("The smallest number is: %d\n", temp);
}