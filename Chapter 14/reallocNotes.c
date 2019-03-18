//char input[64]
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input;
    int len = 0;

    input=(char *)malloc(sizeof(char)*1024);
    if(input == NULL)
    {
        puts("Unable to allocate buffer");
        exit(1);
    }
    puts("Type something long and interesting\n");
    fgets(input, 1023, stdin); //uses 1023 because of null terminator
    len = strlen(input);

    if(realloc(input, sizeof(char)*(len+1)) ==NULL) //+1 for null terminator
    {
        puts("Unable to allocate buffer");
        exit(1);
    }

    puts("Memory reallocated");
    puts("You wrote: ");
    printf("%s\n", input);

    return(0);
}