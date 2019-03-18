//this is my vegan specialty pizza menu

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//extern char crustFunc(); //declares char function

char * crustFunc() //defines char function
    {
        int choice = 0;
        char * crustyString; //declares value of char at an address, lets you input a string as a linked list so no array necessary

        printf("Which crust would you like? Choose\n 1- Thick\n 2- Hand-tossed\n 3- Thin\n 4- Cheese-stuffed\n 5- Deep-dish\n");
        scanf("%s", &choice); //scans in a string

        if(choice < 49 || choice > 53) //compares to ascii value
        {
            printf("ERROR: Enter a number from 1-5\n");
            crustFunc();
        }
        /*else if(isdigit(choice) == 1) //if choice is a digit, returns 1
        {
            printf("ERROR: Enter a number from 1-5\n");
            crustFunc();
        }*/
        else 
        {
            switch(choice)
            {
            case 49:
                crustyString = "Thick";
                break;

            case 50: 
                crustyString= "Hand-tossed";
                break;
            
            case 51: 
                crustyString = "Thin";
                break;
            
            case 52:
                crustyString = "Cheese-stuffed";
                break;
            
            case 53:
                crustyString = "Deep Dish";
                break;
            }
                //printf("Your crust choice is: %s\n", crustyString);
                return crustyString; //returns value at address of crustyString
        }  
    }     