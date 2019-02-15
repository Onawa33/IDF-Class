/*Onawa Lanier
  31Jan2019
  Basic IO DemoLab4a
  */

  #include <stdio.h>

  int main(void)
  {
      int userInput = 0; //intializes userInput as int
      printf("Enter a character:  "); //prints user prompt
      userInput = getchar(); //stores user input.... here's where you'd create an array to store more than 1 character
      printf("Your character was:  "); //prefaces output
      putchar(userInput); //prints output

      getchar();
      return 0;
  }