#include <stdio.h>
#include <stdlib.h>
#include "toppings.h"
#ifndef NEW_PIZZA
#define NEW_PIZZA

typedef struct pizza
{
    char *size;
    char *crust;
    toppings_t *toppings;           //Include beasleys header
    struct pizza *next;
    struct pizza *previous;
}Node, *NodePtr;
//extern NodePtr makeNode(char sizeChoice[], char crustChoice[], toppings_t toppingChoice[]);
void printPizzas(NodePtr np);
void addNode(NodePtr head);
void aboutPage();

NodePtr newPizza()
{
    NodePtr current;
    char *tempSize; 
    char *tempCrust; 
    toppings_t *tempToppings;
    
    printf("\nChoose the desired size of the pizza.\n");
    tempSize = sizza();
    printf("\nChoose the desired type of crust.\n");
    tempCrust = crustFunc();
    printf("\nChoose your desired toppings.\n");
    tempToppings = toppings();

    current = (NodePtr)malloc(sizeof(Node));
    current -> size = tempSize;
    
    current -> crust = tempCrust;
    
    current -> toppings = tempToppings;

    current -> next = NULL;

    //printPizzas(current);
    
    return current;
}

// extern NodePtr makeNode( char sizeChoice[], char crustChoice[], toppings_t toppingChoice[])
// {
//     NodePtr np =(NodePtr)malloc(sizeof(Node));

//     np -> size = sizeChoice;
    
//     np -> crust = crustChoice;
    
//     np -> toppings = toppingChoice;
    
//     np -> next = NULL;
//     return np;
// }
static int pizzaCount = 1;
void printPizzas(NodePtr np)
{
    if(np == NULL)
    {
        pizzaCount = 1;
        return;
    }

    toppings_t * current = np->toppings;
    if()
    {
        printf("\nPizza #%d: %s pizza with %s crust topped with nothing", pizzaCount, np->size);
    }
    else
    {
        printf("\nPizza #%d: %s pizza with %s crust topped with", pizzaCount, np->size, np->crust); 

        while(current != NULL)
        {
            printf(" %s", current->data);
            current = current->next;
        }
        printf(".\n\n");
        pizzaCount++;
        printPizzas(np->next);
    }
    
}

void aboutPage()
{
    FILE *pFile;
    char aboutInfo[256];

    pFile = fopen("/home/student/Downloads/Class(linux)/Class/demo_labs/Block 1 C/Block1Project/AboutPage.txt","r");

    if(pFile != NULL)
    {
        while(!feof(pFile))
        {
            fgets(aboutInfo, 256, pFile);
            printf("%s\n", aboutInfo);
        }
        fclose(pFile);
    }
    else
    {
        printf("IO ERROR: PROBLEM WITH FILE");
    }
}

void addNode(NodePtr head)
{
    NodePtr current = head;
    NodePtr previous = NULL;
    while(current->next != NULL)
    {
        //previous = current;
        current = current->next;      
    }
    previous = current;
    current->next = malloc(sizeof(Node));
    current->next = newPizza();
    current = current->next;
    current->previous = previous;
    if(current == NULL)
    {
        printf("NULL");
    }
    else
    {
        printPizzas(current);
    }
}


#endif