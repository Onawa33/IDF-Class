/*
Onawa Lanier
3.18.19
This program will assist the user with metric-English conversions. Program will prompt user to choose which unit 
they wish to convert a certain unit to. The user will input a unit of measurement to convert to based on choices provided. 
Program will recognize invalid input, and invalid conversions (will not convert length to mass, etc). Program will print the answer.
*/

#include <stdio.h>

int main()
{
    //function declarations
    void length(char * convFrom, float num, char * convTo, int choice1, int choice2);
    void weight(char * convFrom, float num, char * convTo, int choice1, int choice2);
    void volume(char * convFrom, float num, char * convTo, int choice1, int choice2);

    //int variables declaration
    int choice1 = 0;
    int choice2 = 0;
    float num = 0;
    float answer = 0;
    //string variables declaration
    char *convFrom; 
    char *convTo;
//I'll print out all the unit options for the user to choose to switch to and from

    printf("Which unit of measurement would you like to convert from?\n");
    printf("Type in one of these options:  \n");
    printf("1 - Inches\n2 - Feet\n3 - Centimeters\n4 - Meters\n5 - Kilometers\n6 - Ounces\n7 - Pounds\n8 - Grams\n9 -Cups\n10 - Pints\n11 - Quarts\n12 - Gallons\n13 - Milliliters\n14 - Liters\n");
    scanf("%d", &choice1);


    //I'll use a switch case which offers all options for the user to choose from (inches-feet-centimeters-meters-kilometers, 
    //ounces-pounds-grams-kilograms, cup-pint-quart-gallon-milliliter-liter). Switch case includes error handling for 
    //cross-metric conversions, calls conversion functions. 
do{
    //error handling
    while(choice1 < 1 || choice1 > 14)
    {
        printf("ERROR: Enter a number between 1 and 15.\n");
        break;
    }
    while(choice1 >= 1 && choice1 <= 14)
    {
        switch(choice1) //stores and prints user choice
        {
            case 1: convFrom = "Inches";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 2: convFrom = "Feet";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 3: convFrom = "Centimeters";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 4: convFrom = "Meters";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 5: convFrom = "Ounces";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 6: convFrom = "Pounds";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 7: convFrom = "Grams";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 8: convFrom = "Kilograms";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 9: convFrom = "Cups";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 10: convFrom = "Pints";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 11: convFrom = "Quarts";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 12: convFrom = "Gallons";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 13: convFrom = "Milliliters";
            printf("You are converting from %s.\n", convFrom);
            break;

            case 14: convFrom = "Liters";
            printf("You are converting from %s.\n", convFrom);
            break;
        }
        break;
    }
} while (choice1 == 0);
//return 0;

//prompts user for number of units to convert
printf("How many would you like to convert? Please choose a number between 1 and 100.\n");
scanf("%f", &num); //this is where segmentation fault happens
//error handling
if(num < 1 || num > 100)
{
    printf("Please choose a number between 1 and 100.\n");
    num = 0;
}
else if(num > 0 && num < 101)
{
    printf("You chose to convert %f %s.\n", num, choice1);
}

//forces user to choose conversion only from the class of unit they chose
if(choice1 >= 1 && choice1 <= 4) //if choice is between 1 and 4, direct user to length comparisons
{
    printf("Which unit of measurement would you like to convert to?\n");
    printf("Type in one of these options:  \n");
    printf("1 - Inches\n2 - Feet\n3 - Centimeters\n4 - Meters\n");
    scanf("%d", &choice2);

    if(choice2 < 1 || choice2 > 4)
    {
        printf("Please input a number between 1 and 4.\n");
    }
}
else if(choice1 >= 5 && choice1 <= 8) //if the choice is between 5 and 8, direct user to weight comparisons
{
    printf("Which unit of measurement would you like to convert to?\n");
    printf("Type in one of these options:  \n");
    printf("5 - Ounces\n6 - Pounds\n7 - Grams\n8 - Kilograms\n");
    scanf("%d", &choice2);

    if(choice2 < 5 || choice2 > 8)
    {
        printf("Please input a number between 5 and 8.\n");
    }
}
else if(choice1 >= 9 && choice1 <= 14) //if choice is between 9 and 14, direct user to volume comparisons
{
    printf("Which unit of measurement would you like to convert to?\n");
    printf("Type in one of these options:  \n");
    printf("9 - Cups\n10 - Pints\n 11 - Quarts\n 12 - Gallons\n13 - Milliliters\n14 - Liters\n");
    scanf("%d", &choice2);

    if(choice2 < 9 || choice2 > 14)
    {
        printf("Cannot convert between types of measurements. Please input a number between 9 and 14.\n");
    }
}
//ugly if statement prevents cross type conversions
// else if(choice1 == 1...5 && choice2 == 6...15 || choice1 == 6...9 && choice2 == 1...5 || choice1 == 6...9 && choice2 == 10...15 || choice1 == 10...15 && choice2 == 1...9)
// {
//     printf("Cannot convert between types of units; i.e. must convert length between length, weight between weight, and volume between volume."\n);
// }
else
{
    switch(choice1)
    {
        case 1: convTo = "Inches";       
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        length(convFrom, num, convTo, choice1, choice2);
        break;

        case 2: convTo = "Feet";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        length(convFrom, num, convTo, choice1, choice2);
        break;

        case 3: convTo = "Centimeters";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        length(convFrom, num, convTo, choice1, choice2);
        break;

        case 4: convTo = "Meters";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        length(convFrom, num, convTo, choice1, choice2);
        break;

        case 5: convTo = "Kilometers";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        length(convFrom, num, convTo, choice1, choice2);
        break;

        case 6: convTo = "Ounces";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        weight(convFrom, num, convTo, choice1, choice2);
        break;

        case 7: convTo = "Pounds";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        weight(convFrom, num, convTo, choice1, choice2);
        break;

        case 8: convTo = "Grams";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        weight(convFrom, num, convTo, choice1, choice2);
        break;

        case 9: convTo = "Cups";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        volume(convFrom, num, convTo, choice1, choice2);
        break;

        case 10: convTo = "Pints";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        volume(convFrom, num, convTo, choice1, choice2);
        break;

        case 11: convTo = "Quarts";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        volume(convFrom, num, convTo, choice1, choice2);
        break;

        case 12: convTo = "Gallons";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        volume(convFrom, num, convTo, choice1, choice2);
        break;

        case 13: convTo = "Milliliters";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        volume(convFrom, num, convTo, choice1, choice2);
        break;

        case 14: convTo = "Liters";
        printf("How many %s would you like to convert?\n", convTo);
        scanf("%f", &num);
        printf("You are converting %f %s to %s.\n", num, convFrom, convTo);
        //function call
        volume(convFrom, num, convTo, choice1, choice2);
        break;
    }
}
} //end of main

    //Function 1: Converts length metrics, prints result
    void length(char * convFrom, float num, char * convTo, int choice1, int choice2)
    {
        int answer = 0;

        if(choice1 == 1 && choice2 == 1)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 1 && choice2 == 2)
        {
            //converts inches to feet
            answer = num * 12;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 1 && choice2 == 3)
        {
            //converts inches to centimeters
            answer = num * 2.54;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 1 && choice2 == 4)
        {
            //converts inches to meters
            answer = num / 39.37;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 2 && choice2 == 1)
        {
            //converts feet to inches
            answer = num / 12;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 2 && choice2 == 2)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 2 && choice2 == 3)
        {
            //converts feet to centimeters
            answer = num * 30.48;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }    
        else if(choice1 == 2 && choice2 == 4)
        {
            //converts feet to meters
            answer = num / 3.281;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 3 && choice2 == 1)
        {
            //converts centimeters to inches
            answer = num / 2.54;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 3 && choice2 == 2)
        {
            //converts centimeters to feet
            answer = num / 30.48;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 3 && choice2 == 3)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 3 && choice2 == 4)
        {
            //converts centimeters to meters
            answer = num / 100;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 4 && choice2 == 1)
        {
            //converts meters to inches
            answer = num * 39.37;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 4 && choice2 == 2)
        {
            //converts meters to feet
            answer = num * 3.281;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 4 && choice2 == 3)
        {
            //converts meters to centimeters
            answer = num * 100;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 4 && choice2 == 4)
        {
            printf("That's not a conversion.\n");
        }
    }

    //Function 2: Converts weight metrics, prints result
    void weight(char * convFrom, float num, char * convTo, int choice1, int choice2)
    {
        int answer = 0;

        if(choice1 == 5 && choice2 == 5)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 5 && choice2 == 6)
        {
            //converts ounces to pounds
            answer = num / 16;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 5 && choice2 == 7)
        {
            //converts ounces to grams
            answer = num * 28.35;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 5 && choice2 == 8)
        {
            //converts ounces to kilograms
            answer = num / 35.274;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 6 && choice2 == 5)
        {
            //converts pounds to ounces
            answer = num * 16;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 6 && choice2 == 6)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 6 && choice2 == 7)
        {
            //converts pounds to grams
            answer = num * 453.592;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }    
        else if(choice1 == 6 && choice2 == 8)
        {
            //converts pounds to kilograms
            answer = num / 2.205;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 7 && choice2 == 5)
        {
            //converts grams to ounces
            answer = num / 28.35;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 7 && choice2 == 6)
        {
            //converts grams to pounds
            answer = num / 453.592;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 7 && choice2 == 7)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 7 && choice2 == 8)
        {
            //converts grams to kilograms
            answer = num / 1000;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 8 && choice2 == 5)
        {
            //converts kilograms to ounces
            answer = num * 35.274;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 8 && choice2 == 6)
        {
            //converts kilograms to pounds
            answer = num * 2.205;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 8 && choice2 == 7)
        {
            //converts meters to centimeters
            answer = num * 1000;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 8 && choice2 == 8)
        {
            printf("That's not a conversion.\n");
        }
    }

    //Function 3: Converts volume metrics, prints result
    void volume(char * convFrom, float num, char * convTo, int choice1, int choice2)
    {
        int answer = 0;

        if(choice1 == 9 && choice2 == 9)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 9 && choice2 == 10)
        {
            //converts cups to pints
            answer = num / 2;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 9 && choice2 == 11)
        {
            //converts cups to quarts
            answer = num / 4;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 9 && choice2 == 12)
        {
            //converts cups to gallons
            answer = num / 16;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 9 && choice2 == 13)
        {
            //converts cups to milliliters
            answer = num * 236.588;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 9 && choice2 == 14)
        {
            //converts cups to liters
            answer = num / 4.227;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }  
        else if(choice1 == 10 && choice2 == 9)
        {
            //converts pints to cups
            answer = num * 2;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }  
        else if(choice1 == 10 && choice2 == 10)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 10 && choice2 == 11)
        {
            //converts pints to quarts
            answer = num / 2;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }    
        else if(choice1 == 10 && choice2 == 12)
        {
            //converts pints to gallons
            answer = num / 8;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 10 && choice2 == 13)
        {
            //converts pints to milliliters
            answer = num * 473.176;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 10 && choice2 == 14)
        {
            //converts pints to liters
            answer = num / 2.113;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 11 && choice2 == 9)
        {
            //converts quarts to cups
            answer = num * 4;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 11 && choice2 == 10)
        {
            //converts quarts to pints
            answer = num * 2;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 11 && choice2 == 11)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 11 && choice2 == 12)
        {
            //converts quarts to gallons
            answer = num / 4;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 11 && choice2 == 13)
        {
            //converts quarts to milliliters
            answer = num * 946.353;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 11 && choice2 == 14)
        {
            //converts quarts to liters
            answer = num / 1.057;
            printf("%f %s in %s = %d %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 12 && choice2 == 9)
        {
            //converts gallons to cups
            answer = num * 16;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 12 && choice2 == 10)
        {
            //converts gallons to pints
            answer = num * 8;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 12 && choice2 == 11)
        {
            //converts gallons to quarts
            answer = num * 4;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 12 && choice2 == 12)
        {
            printf("That's not a conversion.\n");
        } 
        else if(choice1 == 12 && choice2 == 13)
        {
            //converts gallons to milliliters
            answer = num * 3785.412;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 12 && choice2 == 14)
        {
            //converts gallons to liters
            answer = num * 3.785;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 13 && choice2 == 9)
        {
            //converts milliliters to cups
            answer = num / 236.588;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 13 && choice2 == 10)
        {
            //converts milliliters to pints
            answer = num / 473.176;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 13 && choice2 == 11)
        {
            //converts milliliters to quarts
            answer = num / 946.353;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 13 && choice2 == 12)
        {
            //converts milliliters to gallons
            answer = num / 3785.412;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 13 && choice2 == 13)
        {
            printf("That's not a conversion.\n");
        }
        else if(choice1 == 13 && choice2 == 14)
        {
            //converts milliliters to liters
            answer = num / 1000;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 14 && choice2 == 9)
        {
            //converts liters to cups
            answer = num * 4.227;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 14 && choice2 == 10)
        {
            //converts liters to pints
            answer = num * 2.113;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 14 && choice2 == 11)
        {
            //converts liters to quarts
            answer = num * 1.057;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 14 && choice2 == 12)
        {
            //converts liters to gallons
            answer = num / 3.785;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 14 && choice2 == 13)
        {
            //converts liters to milliliters
            answer = num * 1000;
            printf("%f %s in %s = %f %s", num, convFrom, convTo, answer, convTo);
        }
        else if(choice1 == 14 && choice2 == 14)
        {
            printf("That's not a conversion.\n");
        }
    }
