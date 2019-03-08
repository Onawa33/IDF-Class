#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct stock{
        char symbol[5];
        int quantity;
        float price;
        struct stock *next;
    };
    struct stock *first;
    struct stock *current;
    struct stock *next;
    struct stock *new;


//create the structure in memory
    first = (struct stock *) malloc(sizeof(struct stock));
    if (first == NULL)
        {
            puts("Error");
            exit(1);
        }
// assign structre data

    current=first;
    strcpy(current->symbol,"GOOG");
    current-> quantity=100;
    current-> price=801.19;
    current->next= NULL;

    new = (struct stock *) malloc(sizeof(struct stock));
    if (new == NULL)
        {
            puts("error");
            exit(1);
        }

    current->next=new; 
    current=new;
    strcpy(current->symbol, "YHOO");
    current-> quantity=50;
    current-> price=400.00;
    current->next= NULL;

//Display database
    puts("Investment Portfolio");
    printf("Symbol\tShares\tPrice\tValue\n");
   
    current=first;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current-> symbol,
    current->quantity,current->price, current->quantity*current->price);

    current= current->next;
    printf("%-6s\t%5d\t%.2f\t%.2f\n", current-> symbol,current->quantity,
    current->price, current->quantity*current->price);

    return(0);

}//end of main
