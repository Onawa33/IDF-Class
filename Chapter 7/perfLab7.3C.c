/*DO-WHILE LOOP
Initialize a 26 element int array to 0.
Initialize a char variable to 0.
Use a DO-WHILE loop to input, but not store, a string one character at a time from stdin without scanf()!!
Each time a character is entered:
convert the character to upper case using toupper()
increment the corresponding array element if the user input is a letter
Ensure non-letters (i.e. Ctrl-D, tab) are safely handled
End the loop when a newline is read.
Print the results using a for loop ()*/

//Onawa Lanier
//10Feb2019
//Do-while loop

#include<stdio.h>
#include<ctype.h> //for uppercase

int main()
{
    int myArray[26] = {0}; //array for storing user input
    char userCharbear = 0; //single user char
    int Count = 0; //counter to keep track of position in array

    printf("Input a werd:  \n"); //prompts user for input
    do 
    {
        //fgets(userCharbear, sizeof(userCharbear), stdin); //gets user input
        userCharbear = getc(stdin);
        if ((userCharbear >= 65 && userCharbear< 90) | (userCharbear >= 97 && userCharbear< 122)) 
        //checks in ASCI for special characters, ensures all is lower or uppercase letters
        {
            userCharbear = toupper(userCharbear); //converts input to uppercase
            myArray[Count] = userCharbear; //stores user input into array
            Count++; //increments counter
        }
        
    } while (userCharbear != '\n' | Count < 25); //break case is newline and count being below 25

    for(int i = 0;i < Count; i++) //loop prints character array
        {
            putchar(myArray[i]); //prints to stdout
        }

        return 0;
    }
