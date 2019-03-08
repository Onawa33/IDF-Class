/*Onawa Lanier
  3Feb2019
  perfLab4b
  */
//must declare stdin and stdout with getc and putc

 #include <stdio.h>

 int main(void)
 {
     char userInput = 0;
     printf("Enter a character: ");
     userInput = getc(stdin);
     printf("Your input was ");
     putc(userInput -1, stdout);

    return 0;
 }