#include <stdio.h>

//Determine class average

int main()
{
    int grades [10] = {99, 98, 89, 77, 66, 97, 98, 95, 94, 85};
    int total = 0;
    int count = 0;

    while (count <= 10)
    {
        total += grades[count];
        count ++;
    }

    //total /= 10;
    //total = total/10;
    printf("The class average is: %.3f\n", (float)total / 10);
}