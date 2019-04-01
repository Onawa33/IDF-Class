//Roman Numeral Conversion
/*
Show the user the options
Lets get user menu input

If they want to go to Roman
    Get their decimal number

        REPEAT: See if we can subtract 1000 and still above zero
            if we can then do it
        UNTIL: we can't do that anymore

        ... continue doing until we hit the ones place

        Add as we go then when we finish we have the number

If they want to go to Decimal
    Get their Roman numerals
chunk it...
biggest numbers first
M- thousand, D- 5 hundred, C- 100, X- 10, L- 50, V- 5, I- 1 (CDs, XLs)


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void decimal_to_roman(int num);
void roman_to_decimal(char * userNumeral);
void print_table();
void help();

int main()
{
    int userChoice = 0;
    char * userNumeral = (char *)malloc(15); //memory array

    printf("*****Roman Numeral Converter!******\n");
    printf("\t1.Decimal to Roman\n");
    printf("\t2.Roman to Decimal\n");
    printf("\t3.Print Table\n");
    printf("\t4.Help\n");
    printf("\n\tEnter Your Choice: ");
    scanf("%d",&userChoice);
    
    switch (userChoice)
    {
        case 1:
            system("cls");
            printf("Please Enter a Decimal Number between 1 - 3999: ");
            scanf("%d",&userChoice);
            if(userChoice > 0 && userChoice < 4000)
            {
                decimal_to_roman(userChoice);                
            }

            break;
        case 2:
            system("cls");
            printf("Please Enter a Roman Numeral between 1 - 3999: ");
            scanf("%s",userNumeral);
           
            roman_to_decimal(userNumeral);                
            
            break;
        case 3:
            print_table();
            break;
        case 4:
            help();
            break;
    
        default:
            break;
    }

    return 0;
}

void decimal_to_roman(int num)
{
    int count = 0;
    while(num >= 1000)
    {
        num -= 1000;
        count++;
    }
    for(size_t i = 0; i < count; i++)
    {
        printf("M");
    }
    count = 0;



    while(num >= 100)
    {
        num -= 100;
        count++;
    }
    if(count == 9)
    {
        printf("CM");
    }
    else if(count < 9 && count >= 5)
    {
        printf("D");
        count-=5;
        for(size_t i = 0; i < count; i++)
        {
            printf("C");
        }
    }
    else if(count == 4)
    {
        printf("CD");
    }
    else
    {
        for(size_t i = 0; i < count; i++)
        {
            printf("C");
        }
    }
    count = 0;



    while(num >= 10)
    {
        num -= 10;
        count++;
    }
    if(count == 9)
    {
        printf("XC");
    }
    else if(count < 9 && count >= 5)
    {
        printf("L");
        count-=5;
        for(size_t i = 0; i < count; i++)
        {
            printf("X");
        }
    }
    else if(count == 4)
    {
        printf("XL");
    }
    else
    {
        for(size_t i = 0; i < count; i++)
        {
            printf("X");
        }
    }

        count = 0;



    while(num >= 1)
    {
        num -= 1;
        count++;
    }
    if(count == 9)
    {
        printf("IX");
    }
    else if(count < 9 && count >= 5)
    {
        printf("V");
        count-=5;
        for(size_t i = 0; i < count; i++)
        {
            printf("I");
        }
    }
    else if(count == 4)
    {
        printf("IV");
    }
    else
    {
        for(size_t i = 0; i < count; i++)
        {
            printf("I");
        }
    }
}
void roman_to_decimal(char * userNumeral)
{
    int loop = 0;
    int answer = 0;

    //while(*(userNumeral + loop) != '\n') //pointer maths: userNumeral = beginning of string. Loop = position in string. As loop increments, goes to next memory address of string.

   switch(*(userNumeral + loop))
   {
        case 'M': 
           if(*(userNumeral + loop +1) == 'M')//goes to the place after the M to see if it's also an M
           {
               if(*(userNumeral + loop +2) == 'M')
               {
                   answer += 3000;
                   loop+=3;
               }
               else
               {
                   answer += 2000;
                   loop+=2;
               }                    
           } 
           else
           {
               answer += 1000;
               loop++;
           }
           
        case 'D':
           if(*(userNumeral + loop +1) == 'C')//goes to the place after the D to see if it's a C
           {
               if(*(userNumeral + loop +2) == 'C')
               {
                   if(*(userNumeral + loop +3) == 'C')
                   {
                       answer += 800;
                       loop += 4; //to get to the letter after C
                   }
                   else
                   {
                        answer += 700;
                        loop+=3;
                   }                  
               }
               else
               {
                   answer += 600;
                   loop+=2;
               }                    
           } 
           else
           {
               answer += 500;
               loop++;
           }  
        case 'C':
           if(*(userNumeral + loop +1) == 'C')//goes to the place after the D to see if it's a C
           {
               if(*(userNumeral + loop +2) == 'C')
               {
                        answer += 300;
                        loop+=3;                 
               }
               else
               {
                   answer += 200;
                   loop+=2;
               }                    
            } 
            else
            {
                if(*(userNumeral + loop +1) == 'M')
                {
                    answer += 900; //CM = 900
                    loop+=2;
                }
                else if(*(userNumeral + loop +1) == 'D')
                {
                    answer += 400; //CD = 400
                    loop+=2;
                }
                else
                {
                    answer += 100;
                    loop++;
                }
           } 
        case 'L':
           if(*(userNumeral + loop +1) == 'X')//goes to the place after the D to see if it's a C
           {
               if(*(userNumeral + loop +2) == 'X')
               {
                   if(*(userNumeral + loop +3) == 'X')
                   {
                       answer += 80;
                       loop += 4; //to get to the letter after C
                   }
                   else
                   {
                        answer += 70;
                        loop+=3;
                   }                  
               }
               else
               {
                   answer += 60;
                   loop+=2;
               }                    
           } 
           else
           {
               answer += 50;
               loop++;
           } 
        case 'X':
           if(*(userNumeral + loop +1) == 'X')//goes to the place after the D to see if it's a C
           {
               if(*(userNumeral + loop +2) == 'X')
               {
                        answer += 30;
                        loop+=3;                 
               }
               else
               {
                   answer += 20;
                   loop+=2;
               }                    
            } 
            else
            {
                if(*(userNumeral + loop +1) == 'C')
                {
                    answer += 90; //CM = 900
                    loop+=2;
                }
                else if(*(userNumeral + loop +1) == 'L')
                {
                    answer += 40; //CD = 400
                    loop+=2;
                }
                else
                {
                    answer += 10;
                    loop++;
                }
           } 
        case 'V':
           if(*(userNumeral + loop +1) == 'I')//goes to the place after the D to see if it's a C
           {
               if(*(userNumeral + loop +2) == 'I')
               {
                   if(*(userNumeral + loop +3) == 'I')
                   {
                       answer += 8;
                       loop += 4; //to get to the letter after C
                   }
                   else
                   {
                        answer += 7;
                        loop+=3;
                   }                  
               }
               else
               {
                   answer += 6;
                   loop+=2;
               }                    
           } 
           else
           {
               answer += 5;
               loop++;
           }
        case 'I':
           if(*(userNumeral + loop +1) == 'I')//goes to the place after the D to see if it's a C
           {
               if(*(userNumeral + loop +2) == 'I')
               {
                        answer += 3;
                        loop+=3;                 
               }
               else
               {
                   answer += 2;
                   loop+=2;
               }                    
            } 
            else
            {
                if(*(userNumeral + loop +1) == 'X')
                {
                    answer += 9; //CM = 900
                    loop+=2;
                }
                else if(*(userNumeral + loop +1) == 'V')
                {
                    answer += 4; //CD = 400
                    loop+=2;
                }
                else
                {
                    answer += 1;
                    loop++;
                }
           } 
   }
   printf("%d\n",answer);
}
void print_table()
{
    for(size_t i = 1; i < 101; i++)
    {
        printf("%d\t", i);
        decimal_to_roman(i);
        printf("\n");

    }
    
}
void help()
{
    system("firefox https://en.wikipedia.org/wiki/Roman_numerals"); //tells program to use the terminal
}