#include <stdio.h>

int orderNum(int num1, int num2, int num3);

int num1 = 0;
int num2 = 0;
int num3 = 0;

int main()
{

 printf("Input three numbers: \n");
 scanf("%d %d %d", &num1, &num2, &num3);

 printf("Your numbers in order from smallest to largest are: %d, %d, %d \n", orderNum(num1, num2, num3));

 return 0;
}

int orderNum(int num1, int num2, int num3)
{
    int temp = 0;

    if(num2 > num1) //swaps 1 and 2
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num3 > num2) //swaps 2 and 3
    {
        temp = num2;
        num2 = num3; 
        num3 = temp;
    }
    if(num2 > num1) //swaps 1 and 2
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    
}

