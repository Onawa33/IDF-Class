/*
    Write a program that will evaluate a simple math formula.
    Input the formula with two integers separated by an arithmetic operator from one line.
        Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
    Use a switch statement to print the correct value using the operators as cases.
    Set the default condition to an error.
    Ensure any division provides a double answer with a precision of two decimal places.

NOTE: Scan the arithmetic operator as a char*/

//Onawa Lanier
//8Feb2019
//perfLab7.2d
//Purpose: practice switch statements

#include <stdio.h>

int main(void)
{
    int numEins = 0;
    int numZwei = 0;
    char Op = 0;

    printf("Enter two integers you'd like to do math on separated by an ooperator (+, -, *, /)\n");
    scanf("%d%c%d", &numEins, &Op, &numZwei);

    switch (Op)
    {
        case '+': //adds and prints sum if operator was +
            printf("%d %c %d = %d\n", numEins, Op, numZwei, (numEins + numZwei));
            break;
        case '-': //subtracts and prints if operator was -
            printf("%d %c %d = %d\n", numEins, Op, numZwei, (numEins - numZwei));
            break;
        case '*': //multiplies and prints sum if operator was *
            printf("%d %c %d = %d\n", numEins, Op, numZwei, (numEins * numZwei));
            break;
        case '/': //divides and prints if operator was /. Casts to a double with 2 decimal spaces
            if (numZwei == 0)
            {
                printf("Undefined and not really a thing\n");
            }
            else{
                printf("%d %c %d = %.2lf\n", numEins, Op, numZwei, ((double)numEins / numZwei));
            }            
            break;
        default:
            break;
        
    }
        return 0;

}