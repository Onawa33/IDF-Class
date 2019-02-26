/*1.	Answer each of the following. Assume that single-precision floating-point numbers are stored in 4 bytes, 
and that the starting address of the array is at location 1002500 in memory. Each part of the exercise should use 
the results of previous parts where appropriate.*/

int main()
{

float * fPtr;
float number1 = 7.2;
fPtr = &number1; //sets to address of pointer
printf("%f", *fPtr);//prints value of object pointed to

float number2 = *fPtr; //assigns value of object pointed to (7.2)
printf("Value of number 2 %f", number2); //prints 7.2

printf("The address of number1 is: %p", &number1); 
printf("The address stored in fPtr is: %p",fPtr);


}
 
