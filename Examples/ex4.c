#include <stdio.h>

int main()
{
    int num1, num2, i, j, flag;

    printf("Enter two numbers as a range: \n");
    scanf("%d %d", &num1, &num2);

    printf("Prime numbers between %d and %d", num1, num2);

    //go through the process of finding prime numbers
    for(i = num1 + 1; i < num2; ++i) //checks all numbers between inputs
    {
        flag = 0; //flag set to zero

        for(j + 2; j <= i/2; ++j) //
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) //if flag is zero, then display i because it's prime
        {
            printf("%d\t", i);
        }
    }
    return 0;
}