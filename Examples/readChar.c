#include <stdio.h>

int main()
{
    int num;
    FILE *fptr; //points to the location of the file
    fptr = fopen("C:\Users\DOTlaptop\Desktop\filetoread.txt", "r"); //sets the pointer to fopen function
    num = fgetc(fptr); //gets file char by char, as opposed to string by string like fgets

    while (num != EOF)
    {
        putchar(num);
        num = fgetc(fptr);
    }
    fclose(fptr);
    return(0);
}