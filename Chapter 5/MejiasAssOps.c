//Lt Mejia
//Assigment Operators

#include <stdio.h>
#include <math.h>

int main (void)
{

    int x = 9;
    int y = 3;

    printf(" Result x *= y : %d \n", x, y,(x *= y) );
    printf(" Result x /= y : %d \n", x, y,(x /= y) );
    printf(" Result x %= y : %d \n", x, y, (x %= y) );
    printf(" Result x += y : %d \n", x, y,(x += y) );
    printf(" Result x -= y : %d \n", x, y, (x -= y) );
    printf(" Result x *= ++y : %d \n", x, y,(x *= ++y) );
    printf(" Result x /= y-- : %d \n", x, y,(x /= y--) );
    printf(" Result x %= --x : %d \n", x, y,(x %= --x) );
    printf(" Result x -= y++ : %d \n", x, y,(x -= y++) );
    printf(" Result (y %= y) || (x /= x--)  : %d \n", x, y,(y %= y) || (x /= x--) );


    return 0;
}