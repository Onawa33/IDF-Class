#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    float *p, sum = 0;
    int i, n;
 
    printf("Enter the number of students: ");
    scanf("%d", &n);
 
    // allocate memory to store n variables of type float
    p = (float*)malloc(n*sizeof(float));
 
    // if dynamic allocation failed exit the program
    if(p==NULL)
    {
        printf("Memory allocation failed");
        exit(1); // exit the program
    }
 
    // ask the student to enter marks
    for(i = 0; i < n; i++)
    {
        printf("Enter marks for %d student: ", i+1);
        scanf("%f", p+i);
    }
 
    // calculate sum
    for(i = 0; i < n; i++)
    {
        sum += *(p+i);
    }
 
    printf("\nAverage marks = %.2f\n", sum/n);
 
    // signal to operating system program ran fine
    return 0;
}
/*
How it works:
In line 6, we have declared a pointer to float p and a float variable s, where it is initialized to 0.
In line 7, we have declared two variables i and n of type int.
In line 9, printf() function prints "Enter the number of students: " to the console.
In line 10, scanf() is used to read input from the user, which is then stored in a variable n.
Line 12 uses malloc() function to dynamically allocate memory to store n numbers of type float. The variable p is of type pointer to float or (float*), that’s why the result of malloc() function is typecasted using (float*).
In line 15, the if condition checks whether the pointer returned by malloc() is null pointer or not. If p is NULL then memory allocation failed and the program terminates.
In line 21, we have a for loop which repeatedly asks the user to enter marks n times. Notice that in scanf() statement p + i is used without & sign because p is a pointer.
In line 29, we have another for loop which accumulates the marks of n students in a variable sum.
In line 34, Average marks are displayed by dividing total marks by a total number of students.
*/
