#include <stdio.h>

int main()
{
    int num1, num2, temp = 0;

    printf("Enter first and second number: \n");
    scanf("%d%d", &num1, &num2);

    //swapping
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping, \nFirst number: %d \nSecond number: %d\n", num1, num2);

    return 0;
}