//Onawa Lanier
//5Feb2019
//Operators Quiz

#include <stdio.h>
#include <math.h>

int main()
{
    //initializes ints for math
int x = 7;
int y = 4;
float z = 0;
//////// WRITE EACH RESULT ////////
printf("x * y = %d\n", (x*y));
printf("%f = x / y\n", (x/y));
printf("x % y = %d\n", (x % y));
printf("y + x = %d\n", (x+y));
printf("y - x = %d\n", (x-y));
printf("-y = %d\n", -y);
printf("++x = %d\n", (++x));
printf("y++ = %d\n", (y++));
printf("x-- = %d\n", (x--));
printf("--y = %d\n", (--y));
printf("1 + 2 * (3 + y) + 5 = %d\n", (1 + 2 * (3 + y) + 5));

return 0;
}