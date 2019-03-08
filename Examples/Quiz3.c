/*
Modify the source code  so that tests are also
made for counting upper- and lowercase letters. Display those results as well
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char phrase[] = "Liberty is Tumultuous!!!";

    int index,alpha,blank,punct, upper, lower;

    alpha = blank = punct = upper = lower = 0;

/* gather data */
    index = 0;
    while(phrase[index])
    {
        if(isalpha(phrase[index]))
            alpha++;
        if(isblank(phrase[index]))
            blank++;
        if(ispunct(phrase[index]))
            punct++;
        if(isupper(phrase[index]))
            upper++;
        if(islower(phrase[index]))
            lower++;
        index++;
    }

/* print results */
    printf("\"%s\"\n",phrase);
    puts("Statistics:");
    printf("%d alphabetic characters\n",alpha);
    printf("%d blanks\n",blank);
    printf("%d punctuation symbols\n",punct);

    return(0);
}


