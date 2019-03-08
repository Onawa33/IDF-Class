#include <stdio.h>

int main()
{
    int x;

    for(x = 1; x <=10; x++)
    {
        if( x== 5)
        {
            continue; //skips printing the number 5 because continue breaks out of the loop
        }
        printf("%d\n", x);
    }
}