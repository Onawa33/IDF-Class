#include <stdio.h>

// Pizza size
extern char * sizza()
{
    int choice = 0;
    char *pizzaSize;

    printf("\n[PIZZA SIZES]\n");
    printf("|Personal[1]:  8\"|\n|Small   [2]: 10\"|\n|Medium  [3]: 12\"|\n|Large   [4]: 14\"|\n|X-Large [5]: 16\"|\n|Murica  [6]: 24\"|\n");
    printf("Select your size: ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 7)
    {
        printf("Error in input\nRestarting size selection\n");
        sizza();
    }
    else
    {
        switch(choice)
        {
            case 1:
                pizzaSize = "8\"";
                return pizzaSize;
                break;
            case 2:
                pizzaSize = "10\"";
                return pizzaSize;
                break;
            case 3:
                pizzaSize = "12\"";
                return pizzaSize;
                break;
            case 4:
                pizzaSize = "14\"";
                return pizzaSize;
                break;
            case 5:
                pizzaSize = "16\"";
                return pizzaSize;
                break;
            case 6:
                pizzaSize = "24\"";
                return pizzaSize;
                break;
            default:
                return NULL;
                break;
        }
    }
    return NULL;
}