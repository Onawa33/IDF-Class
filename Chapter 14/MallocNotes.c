// p = (type *)malloc(size)

#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int *age;

    age = (int *)malloc(sizeof(int) *1); //*1 allocates one byte

    if(age == NULL)
    {
        puts("Unable to allocate memory");
        exit(1);
    }

    printf("How old are you? ");
    scanf("%d", age);
    printf("You are %d years old", *age);
    return(0);
}
*/
//kelvin = celsius + 273.15
//kelvin = (fahrenheit + 459.67) * (5.0/9.0)

int main()
{
    int *celsius;
    int *kelvin;
    int *fahrenheit;

    int choice = 0;

    celsius = (int *)malloc(sizeof(int) *1); //*1 allocates one byte
    kelvin = (int *)malloc(sizeof(int) *1); //*1 allocates one byte
    fahrenheit = (int *)malloc(sizeof(int) *1); //*1 allocates one byte

    printf("Which do you want to do? Convert: Celsius to Kelvin (1), Fahrenheit to Kelvin (2)");
    scanf("%d", choice);

    switch (choice)
    {
        case 1: 
            printf("Input celsius to convert to Kelvin");
            scanf("%d", celsius);
            kelvin = (celsius + (273.15));
            printf("Kelvin = %d", kelvin);

        case 2: 
             printf("Input fahrenheit to convert to Kelvin");
            scanf("%d", fahrenheit);
            kelvin = (fahrenheit + (459.67)) * (5.0/9.0);
            printf("Kelvin = %d", kelvin);
    }
}
