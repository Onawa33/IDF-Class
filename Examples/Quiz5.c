/*
10 students either passed or failed an exam. Write a program to summarize the results. 
Next to each name, a 1 is written if passed, a 2 if failed. ***Hard code student names to array
Prompt user to input result 1 or 2 for each student. ***Print names in loop to ask for score and scan in
Count the 1's and 2's. ***Keep a count of 1's and 2's
Display a summary of students who passed and failed. ***Print total 1's and 2's
If more than 8 passed, print "Bonus to unstructor!" *** print if more than 8 1's
*/

#include <stdio.h>
#include <string.h>


char *students[10] = {"Joe", "Butler", "Mejia", "Ogden", "Beasly", "Lanier", "Vogel", "Marchesani", "Mclain", "Whelpley"};


int main()
{
        int passed = 0;
        int failed = 0;

    for(int i = 0; i < 10; i++)
    {
        int num = 0;

        printf("Input a 1 if student passed, a 2 if student failed: \n %s \n", students[i]);
        scanf("%d", &num);
        if(num == 1)
        {
            passed += 1;
        }
        if(num == 2)
        {
            failed += 1;
        }
    }
    printf("Number of students who passed: %d\nNumber of students who failed: %d\n", passed, failed);

    if(passed >= 8)
    {
        printf("Bonus to instructor!!!\n");
    }
}



