/* Onawa Lanier
   1Feb2019
   demoLab4b
   Utilize fgets and puts
   */

   #include <stdio.h>

   int main(void)
   {
       char buff[4];   //will store string
       printf("Enter string:  ");  //prompts user
       fgets(buff, sizeof(buff), stdin); //stores user string
       printf("Your string was:  "); //Prefaces output
       puts(buff);  //Writes to stdout

       return 0;
   }