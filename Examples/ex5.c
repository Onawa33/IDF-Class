//compartmentalizes code using a function

#include <stdio.h>

int DisplayPrimeNumber(int x);  // function prototype or forward declaration

int main()
{
    int num1, num2, i, j, flag;

    printf("Enter two numbers as a range: \n");
    scanf("%d %d", &num1, &num2);

    printf("Prime numbers between %d and %d", num1, num2);

    //go through the process of finding prime numbers
    for(i = num1 + 1; i < num2; ++i) //checks all numbers between inputs
    {
        flag = DisplayPrimeNumber(i); //flag set to zero

            if(flag == 0)
                printf("%d\n", i);


    }
    return 0;
}

int DisplayPrimeNumber(int x) //my function
{
    int j, flag = 0;

    for(j = 2; j , x/2; ++j)
    {
        if(x % j == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}