    //Onawa Lanier
    //12Feb2019
    //Calculator with Functions
    
    /*Create the following functions:
        main():
            This should be what runs your ui, asks for user input, checks for errors/input and runs the needed functions
        add()
            This should add two numbers together
        subtract()
            This should subtract two numbers
        divide()
            This should divide two numbers
        multiply()
            This should multiply two numbers
    Check for errors and valid user input
    Make the program loop
Recomendations
    More than two numbers
    More mathmatical functions
    Mix and match operations*/
#include <stdio.h>
#include <math.h>

//initializes my functions and provides the arguments they take
double add(double numOne, double numTwo);
double subtract(double numOne, double numTwo);
double multiply(double numOne, double numTwo);
double divide(double numOne, double numTwo);
double remaind(double numOne, double numTwo);

double main()
{    
    double loopdiloop = 1; //

while (loopdiloop <= 1) //loops through calculator function, calls specific functions if input is good
{
    double numOne = 0;
    double numTwo = 0;
    double Answer = 0;
    char opOne = ' ';

    printf("Enter two numbers you'd like me to math, separated by the operators. Ex: 9*2\n");
    fscanf(stdin, "%lf%c%lf", &numOne, &opOne, &numTwo);

    //checks for valid user input
    if (numTwo == 0 && opOne == '/')
    {
        printf("Undefined. Please don't divide by zero.\n");
    }
    //calls function and returns the answer, stores in user input
    if(opOne == '*' || opOne == 'x')
    {
        numOne = multiply(numOne, numTwo);
        printf("%lf", numOne);
        loopdiloop = 0;
    }
    else if (opOne == '/')
    {
        numOne = divide(numOne, numTwo);
        printf("%lf", numOne);
        loopdiloop = 0;
    }
    else if (opOne == '+')
    {
        numOne = add(numOne, numTwo);
        printf("%lf", numOne);
        loopdiloop = 0;
    }
    else if (opOne == '-')
    {
        numOne = subtract(numOne, numTwo);
        printf("%lf", numOne);
        loopdiloop = 0;
    }
    else if (opOne == '%')
    {
        numOne = remaind(numOne, numTwo);
        printf("%lf", numOne);
        loopdiloop = 0;
    }
    return 0;
}
}
//my functions return values
double multiply(double numOne, double numTwo)
{
    return numOne*numTwo;    
}
double divide(double numOne, double numTwo)
{
    return numOne/numTwo;
}
double add(double numOne, double numTwo)
{
    return numOne+numTwo;
}
double subtract(double numOne, double numTwo)
{
    return numOne-numTwo;
}
double remaind(double numOne, double numTwo)
{
    return ((int)numOne%(int)numTwo); //casts doubles to ints for remainder operand
}