//Onawa Lanier
//5Feb2019
//perfLab5A
//Calculates the hypotenuse of a triangle

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main(void) 
{
    /* insert initialize variables here */
    int legOne = 0;
    int legTwo =  0;
    double legThree = 0;

    /* insert input values and assign to variables here */
    printf("Enter the two legs of the right triangle separated by a tab; ex. 9  3 ;\n");
    //stores the input data to variables
    scanf("%d\t%d", &legOne, &legTwo);

    if ((legOne < 0) && (legTwo < 0)) //making sure input is more than zero
    {
        printf("Please input integers please");
    
    }
    else 
    {
        legThree = ((legOne * legOne) + (legTwo * legTwo)); //calculates the hypotenuse

        printf("The hypotenuse is %lf", sqrt(legThree)); //prints the answer as a double because the product isn't a pure integer
    }
    return 0;
}