//linked lists

#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int num;
    struct node *next;

} Node, *NodePtr; //names the node

int main()
{
    void printList(NodePtr);
    NodePtr makeNode(int);
    int n;
    NodePtr top, np, last;

    top = NULL;
    //adding to the beginning

    if(scanf("%d", n) != 1) n=0; //0 is for our exit
    while(n != 0)
    {
        np = makeNode(n); //create a new node containing n

        if(top == NULL) top = np; //set top as first node
        else last -> next = np;
    }
    printList(top);

} //end of main

NodePtr makeNode(int n) //function to make a new node and push the current node to next for new data
{
    NodePtr np = (NodePtr)malloc(sizeof(Node));
    np -> num = n; 
    np -> next = NULL;
    return np; 
} //making the node

void printList(NodePtr np)
{
    while (np != NULL) //while there's a node
    {
        printf("%d\n", np -> num);
        np = np ->next; //go to the next node
    }
} //end of printList
