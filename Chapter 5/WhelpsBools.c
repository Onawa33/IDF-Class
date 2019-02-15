#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int x = 2;
    int y = 6;

    bool one = (y<x);
    bool two = (y<=x);
    bool three = (y>x);
    bool four = (y>=x);
    bool five = (y==x);
    bool six = (y!=x);
    bool seven = (2==y);
    bool eitght = (6!=x);
    bool nine = (6>=2);
    bool ten = (2<6);
    bool bonus = (x!=y!=3>=x);

    printf("#1 (y<x) is %s\n", one?"true":"false" );
    printf("#2 (y<=x) is %s\n", two?"true":"false" );
    printf("#3 (y>x) is %s\n", three?"true":"false");
    printf("#4 (y>=x) is %s\n", four?"true":"false");
    printf("#5 (y==x) is %s\n", five?"true":"false");
    printf("#6 (y!=x) is %s\n", six?"true":"false");
    printf("#7 (2==y) is %s\n", seven?"true":"false");
    printf("#8 (6!=x) is %s\n", eitght?"true":"false");
    printf("#9 (6>=2) is %s\n", nine?"true":"false");
    printf("#10 (2<6) is %s\n", ten?"true":"false");
    printf("Bonus (x!=y!=3>=x) is %s\n", bonus?"true":"false");


    return 0;
}