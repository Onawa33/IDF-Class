#ifndef TOPPINGS 
#define TOPPINGS
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct toppings{
    struct toppings* next;
    char *data;
}toppings_t;

toppings_t* toppings()
{
    int choice;
    int loop = 1;
    toppings_t* head = (toppings_t*)malloc(sizeof(toppings_t));
    toppings_t* current;
    do
    {
        printf("select a topping to add:1)Sausage 2)Pepperoni 3)Bacon 4)Ham 5)Onions 6)Mushrooms 7)Green Peppers 8)Banana Peppers 9)Pineapple 10) Finish Selecting Toppings:   ");
        scanf("%i",&choice);
        if (choice != 10) 
        {
            if(head->data == NULL)
            {
                current = head;
            }
            else
            {
                current->next = malloc(sizeof(toppings_t));
                current = current->next;
            }
        }
        
        switch(choice)
        {
            case 1:
                current ->data ="Sausage";       
                break;
            case 2:
                current ->data ="Pepperoni";
                break;
            case 3:
                current ->data="Bacon";
                break;
            case 4:
                current ->data="Ham";
                break;
            case 5:
                current ->data="Onions";
                break;
            case 6:
                current ->data="Mushrooms";
                break;
            case 7:
                current ->data="Green Peppers";
                break;
            case 8:
                current ->data="Banana Peppers";
                break;
            case 9:
                current ->data="Pineapple";
                break;
            default:
                loop = 0;
        }
    }while (loop == 1);

    printf("\n");
    
    return head;
    
}


#endif