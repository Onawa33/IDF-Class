//Onawa Lanier
//5Feb2019
//Operators Quiz

#include <stdio.h>
#include <math.h>

int main()
{

int x = 2;
int y = 6;
//////// WRITE EACH RESULT ////////
printf("y < x = %d\n", (y<x));
printf("y <= x = %d\n", (y<=x));
printf("y > x = %d\n", (y>x));
printf("y >= x = %d\n", (y>=x));
printf("y == x = %d\n", (y==x));
printf("y != x = %d\n", (y!=x));
printf("2 == y = %d\n", (2==y));
printf("6 != x = %d\n", (6!=x));
printf("6 >= 2 = %d\n", (6>=2));
printf("2 < 6 = %d\n", (2<6)); 
printf("x != y != 3 >= x = %d\n", (((x != y) != 3) >= x));            // Bonus
}