//Onawa Lanier
//5Feb2019
//Operators Quiz
//

#include <stdio.h>
#include <math.h>


int x = 9;
int y = 3;

int main()
{

//////// WRITE EACH VALUE OF X ////////

printf("#1 %i *= %i = %d\n", x, y, (x *= y));
printf("#2 %i /= %i = %d\n", x, y, (x /= y));
printf("#3 %i %%= %i = %d\n", x, y, (x %= y));
printf("#4 %i += %i = %d\n", x, y, (x += y));
printf("#5 %i -= %i = %d\n", x, y, (x -= y));
printf("#6 %i *= %i++y = %d\n", x, y, (x += ++y));
printf("#7 %i /= %i-- = %d\n", x, y, (x /= y));
printf("#8 %i %%= %i--x = %d\n", x, y, (x %= --x));
printf("#9 %i += %i--y = %d\n", x, y, (x += --y));
printf("#10 %i -= %iy++ = %d\n", x, y, (x -= y++));
printf("(y %= y) || (x /= x--) = %d\n", x, y, (y %= y) || (x /= x--) );    
// Bonus
return 0;
}
