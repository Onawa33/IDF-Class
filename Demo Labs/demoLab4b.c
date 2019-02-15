/* Onawa Lanier
   1Feb2019
   demoLab4b
   Utilize getc and putc
   */

   #include <stdio.h>

   int main(void)
   {
       int userInput = 0;
       printf("Enter a character:  ");
       userInput = getc(stdin);
       printf("Your character was:  ");
       putc(userInput, stdout);

       //getc();
       return 0;
   }