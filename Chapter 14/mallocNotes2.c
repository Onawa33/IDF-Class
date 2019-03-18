//char input[64]
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input;

    input=(char *)malloc(sizeof(char)*1024);
    if(input == NULL)
    {
        puts("Unable to allocate buffer");
        exit(1);
    }
    puts("Type something long and interesting\n");
    fgets(input, 1023, stdin); //uses 1023 because of null terminator
    puts("You wrote: ");
    printf("%s\n", input);

    return(0);
}