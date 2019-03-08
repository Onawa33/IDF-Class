/*Onawa Lanier
  4Feb2019
  perfLab4d
  Formatted input (strings and numbers)
  */

 /*
 Part 1
    Read a first, middle and last name as input into separate char arrays
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for a nul-terminator
    Specify a ("\t") as a delimitating character
    Print the full name, separating each string with a tab and newline ("\t\n")
    Part 2
    Read two integers from one line
    Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
    Reprint the two integers and result as if the answer were being read by a human
*/
 
 #include <stdio.h>
 #include <math.h>

 int main(void)

 {
     char firstName[30] = {0};
     char middleName[30] = {0};
     char lastName[30] = {0};

     int numUno = 0;
     int numDos = 0;

     printf("Input your first, middle, and last names \n separated by a tab: \n", &firstName, &middleName, &lastName);
     scanf("%29s\t%29s\t%29s", &firstName, &middleName, &lastName);
     printf("The name you entered is: \n");
     printf("\t%s\t\%s\t%s\n", firstName,middleName,lastName);


    printf("Enter two integers separated by an asterisk (*) so I can multiply them; ex. 9*9: \n");
    scanf("%d%c*%d"),&numUno, &numDos;
    //int intProduct = numUno * numDos;
    printf("The math says %d * %d is %d\n", numUno, numDos, numUno * numDos);


    return 0;
 }