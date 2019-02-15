//Onawa Lanier
//5Feb2019
//Operators Quiz

#include <stdio.h>
#include <math.h>

int main()
{

int x = 99;
int y = 0;

printf("#1 x && y = %d\n", (x && y));
printf("#2 y || x = %d\n", (y || x));
printf("#3 !y = %d\n", (!y));
printf("#4 y && 0 = %d\n", (x*y && 0));
printf("#5 x || 42 = %d\n", ((x*x) || 42));
printf("#6 !x = %d\n", (!x));
printf("#7 x && x = %d\n", (x*x) && x);
printf("#8 y || y = %d\n", (x*y) || y);
printf("#9 !1 = %d\n", (!y));
printf("#10 1 && 1 = %d\n", (x*1) && 1); 
printf("#Bonus (0 && 1) || (2 && 3) = %d\n", (0 && 1) || (2 && 3));       // Bonus

return 0;
}