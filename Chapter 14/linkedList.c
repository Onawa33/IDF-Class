/*Create a linked list, the struct members should contain the following:
Each students initals
Each students favoriate musical artist
Each students dream car
Required data for linked list completion
May be worth each student just posting their data into a slack channel so everyone can grab off of it
Create a menu allowing for the following:
Print out of all students and all of their data
Print out of all students and only one of their data members on request of user (ex. print out all students and their fav car)
Print out of only a specific student (This one can be challanging)
BONUS
Add additonal students to the end
Remove students at the end
Remove a specific student (This one is challanging)*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Student 
{
    int ID;
    char initials[4];
    char artist[32];
    char dreamCar[32];
    struct Student * next_node_t; //points the struct to the location of the next node
}node_t;

void spillList(node_t *head); 

int main()
{
    //Allocated the memory to the heap. And assigning the position it is created at to the pointer
    node_t * linkS1 = (node_t*)malloc(sizeof(node_t));  //head
    node_t * linkS2 = (node_t*)malloc(sizeof(node_t));
    node_t * linkS3 = (node_t*)malloc(sizeof(node_t));
    node_t * linkS4 = (node_t*)malloc(sizeof(node_t));  //tail

    //head
    linkS1-> ID = 1;
    strcpy(linkS1->initials, "MEV");
    strcpy(linkS1->artist, "Etta James");
    strcpy(linkS1->dreamCar, "Audi");
    linkS1->next_node_t = linkS2;

    //node_t2
    linkS2-> ID = 2;
    strcpy(linkS2->initials, "GNW");
    strcpy(linkS2->artist, "Villagers");
    strcpy(linkS2->dreamCar, "Toyota");
    linkS2->next_node_t = linkS3;

    //node3
    linkS3-> ID = 3;
    strcpy(linkS3->initials, "SLC");
    strcpy(linkS3->artist, "Bjork");
    strcpy(linkS3->dreamCar, "Jeep");
    linkS3->next_node_t = linkS4;

    //tail
    linkS4-> ID = 4;
    strcpy(linkS4->initials, "SLD");
    strcpy(linkS4->artist, "James Brown");
    strcpy(linkS4->dreamCar, "Tesla"); 
    linkS4->next_node_t = NULL;

    spillList(linkS1); //what does this do?

} //end of main

void spillList(node_t *head)//what does this do?

{
    int choice = 0;   

    while (choice != 4) //while there's a node?
    {

        node_t* current = head; //sets and resets current node to head each time loop runs

        printf("Choose what you'd like to see:\n 1 - All students and their data\n 2 - All students and one choice of data\n 3 - All of one student's data\n 4 - Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                while (current != NULL)
                {
                    printf("\nStudent Inintials: %s\n Student's Favorite Artist: %s\n Student's Dream Car: %s\n\n\n", current-> initials, current-> artist, current-> dreamCar);
                    current = current->next_node_t;                    
                }
                break;
            case 2: //prints all students and choice of one piece of data
                printf("Choose which data to show about each student: \n 1 - Favorite Artist\n 2 - Dream Car\n");
                scanf("%d", &choice);
                if(choice == 1)
                    {                      
                      
                        printf("\nStudent Inintials: %s\n Student's Favorite Artist: %s\n \n", current-> initials, current-> artist);
                        current = current->next_node_t; 
                        printf("\nStudent Inintials: %s\n Student's Favorite Artist: %s\n \n", current-> initials, current-> artist);
                        current = current->next_node_t;                        
                        printf("\nStudent Inintials: %s\n Student's Favorite Artist: %s\n \n", current-> initials, current-> artist);
                        current = current->next_node_t;
                        printf("\nStudent Inintials: %s\n Student's Favorite Artist: %s\n \n", current-> initials, current-> artist);
                        break;                            
                    }
                if(choice == 2)
                    {
                        printf("\nStudent Inintials: %s\n Student's Dream Car: %s\n \n", current-> initials, current-> dreamCar);
                        current = current->next_node_t; 
                        printf("\nStudent Inintials: %s\n Student's Dream Car: %s\n \n", current-> initials, current-> dreamCar);
                        current = current->next_node_t;
                        printf("\nStudent Inintials: %s\n Student's Dream Car: %s\n \n", current-> initials, current-> dreamCar);
                        current = current->next_node_t;
                        printf("\nStudent Inintials: %s\n Student's Dream Car: %s\n \n", current-> initials, current-> dreamCar);
                        break;
                    }
            case 3: //prints out a specific student's data
                printf("Choose which student's data you'd like to see: 1 - Maeve, 2- Gene, 3 - Stella, 4 - Skooma\n");
                scanf("%d", &choice);  

                if(choice == 1)
                {
                    printf("\nStudent Inintials: %s\nStudent's Favorite Artist: %s\nStudent's Dream Car: %s\n \n", current-> initials, current-> artist, current-> dreamCar);                        
                }
                else if(choice == 2)
                {
                    current = current->next_node_t;
                    printf("\nStudent Inintials: %s\nStudent's Favorite Artist: %s\nStudent's Dream Car: %s\n \n", current-> initials, current-> artist, current-> dreamCar);
                }
                else if(choice == 3)
                {
                    current = current->next_node_t->next_node_t;
                    printf("\nStudent Inintials: %s\nStudent Fav Artist: %s\nStudent's Dream Car: %s\n \n", current-> initials, current-> artist, current-> dreamCar);
                }
                else if(choice == 4)
                {
                    current = current->next_node_t->next_node_t->next_node_t;
                    printf("\nStudent Inintials: %s\nStudent Fav Artist: %s\nStudent's Dream Car: %s\n \n", current-> initials, current-> artist, current-> dreamCar);
                }

                break;
        
        }      
    }   
}
