/* Onawa Lanier
   1Feb2019
   demoLab4b
   */

   #include <stdio.h>

   int main(void)
   {
    FILE *fp; 
    fp = fopen("/home/student/Desktop/Class/Demo Labs/fileOpenClose.txt", "a");
    int userInput = 0;                // Will store input
    printf("Enter a character: ");    // Prompts user
    userInput = getc(stdin);          // Stores stream input
    putc(userInput, fp);              // Writes to stdout
    printf("\n");
    fclose(fp);

       return 0;
   }