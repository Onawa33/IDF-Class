#include <stdio.h>

int main()
{
    float fahr, cel; //declared variables
    printf("Enter a celsius temp");
    scanf("%f", &cel);

    fahr = (1.8 *cel) + 32.0; //converting formula
    printf("\nTemp in Fahrenheit: %.2f\n", fahr);

    return 0;
}