/*
DND project:    (make a struct) 69 ability points total are allowed, 13 per skill

(CHARACTER) (structs for options)
Character name (char)
Class (int)     1- Barbarian 2- Bard 3- Cleric 
                4- Druid 5- Fighter 6- Monk 
                7- Paladin 8- Ranger 9- Rogue 
                10- Sorcerer 11- Warlock 12- Wizard
Level           1
Race (char)     1- Dragonborn 2- Dwarf 3- Elf   
                4- Gnome 5- Half-elf 6- Halfling 
                7- Half-orc 8- Human 9- Tiefling
Alignment       1- Lawful Good 2- Lawful Neutral 3- Lawful Evil
                4- Chaotic Good 5- Chaotic Neutral 6- Chaotic Evil
                7- Neutral Good 8- True Neutral 9- Neutral Evil

(SKILLS) (69 points)(8-15 max each)(user input)
(min-max num, modify & print remaining points to utilize, apply 0 to any remaining skills)
(if num < 8 || num > 15) err
else (num set to struct, total - num)
strength        
dexterity
constitution
intelligence
wisdom
charisma

(ABILITIES)
armor Class     (opposition is required to roll higher than this number in order to hit you)
initiative      (user input to max (?))
speed           (user input to max (?))
hit point maximum, current hit points

dice rolls (for later)

remember to show an output of the updated stats! 
- help goes to wikipage
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct declaration
typedef struct DnDStruct
{
    char Name[45];
    int Class;
    int Level;
    int Race;
    int Alignment;
}DnD;

//function declaration
int minusTotal(int skillPts, int temp);

int main(void)
{
    DnD * myCharacter = malloc(sizeof(DnD));

    //variables Character
    int class = 0;
    int race = 0;
    int align = 0;
    myCharacter->Level = 1;

    //variables Skill
    int skillPts = 69;
    int temp = 0;
    int strength = 0;
    int dexterity = 0;
    int constitution = 0;
    int intelligence = 0;
    int wisdom = 0;
    int charisma = 0;

    printf("Input character name:  \n");
    scanf("%s", myCharacter->Name);

    printf("Choose your Class:  \n");
    printf("1- Barbarian \n 2- Bard \n 3- Cleric \n4- Druid \n 5- Fighter \n 6- Monk \n7- Paladin \n 8- Ranger \n 9- Rogue \n10- Sorcerer \n 11- Warlock \n 12- Wizard \n ");
    scanf("%d", class);

    printf("Choose your Race:  \n");
    printf("1- Dragonborn \n2- Dwarf \n3- Elf\n4- Gnome \n5- Half-elf \n6- Halfling\n7-Half-orc \n8- Human \n9- Tiefling");
    scanf("%d", race);

    printf("Choose your Alignment:  \n");
    printf("1- Lawful Good \n2- Lawful Neutral \n3- Lawful Evil \n4- Chaotic Good \n5- Chaotic Neutral \n6- Chaotic Evil \n7- Neutral Good \n8- True Neutral \n9- Neutral Evil");
    scanf("%d", align);

    if(class < 1 || class > 12)
    {
        printf("Error in input\n Restarting class selection\n");
    }
    else
    {
        switch(class)
        {
            case 1:
                myCharacter->Class = "Barbarian";
                break;
            case 2: 
                myCharacter->Class = "Bard";
                break;
            case 3:
                myCharacter->Class = "Cleric";
                break;
            case 4: 
                myCharacter->Class = "Druid";
                break;
            case 5: 
                myCharacter->Class = "Fighter";
                break;
            case 6: 
                myCharacter->Class = "Monk";
                break;
            case 7: 
                myCharacter->Class = "Paladin";
                break;
            case 8: 
                myCharacter->Class = "Ranger";
                break;
            case 9:
                myCharacter->Class = "Rogue";
                break;
            case 10: 
                myCharacter->Class = "Sorcerer";
                break;
            case 11:
                myCharacter->Class = "Warlock";
                break;
            case 12:
                myCharacter->Class = "Wizard";
                break;
        }
    }
    if(race < 1 || race > 9)
    {
        printf("Error in input\n Restarting race selection\n");
    }
    else
    {
        switch(race)
        {
            case 1:
                myCharacter->Race = "Dragonborn";
                break;
            case 2: 
                myCharacter->Race = "Dwarf";
                break;
            case 3:
                myCharacter->Race = "Elf";
                break;
            case 4: 
                myCharacter->Race = "Gnome";
                break;
            case 5: 
                myCharacter->Race = "Half-elf";
                break;
            case 6: 
                myCharacter->Race = "Halfling";
                break;
            case 7: 
                myCharacter->Race = "Half-orc";
                break;
            case 8: 
                myCharacter->Race = "Human";
                break;
            case 9:
                myCharacter->Race = "Tiefling";
                break;
        }
    }
    if(align < 1 || align > 9)
    {
        printf("Error in input\n Restarting align selection\n");
    }
    else
    {
        switch(align)
        {
            case 1:
                myCharacter->Alignment = "Lawful Good";
                break;
            case 2: 
                myCharacter->Alignment = "Lawful Neutral";
                break;
            case 3:
                myCharacter->Alignment = "Lawful Evil";
                break;
            case 4: 
                myCharacter->Alignment = "Chaotic Good";
                break;
            case 5: 
                myCharacter->Alignment = "Chaotic Neutral";
                break;
            case 6: 
                myCharacter->Alignment = "Chaotic Evil";
                break;
            case 7: 
                myCharacter->Alignment = "Neutral Good";
                break;
            case 8: 
                myCharacter->Alignment = "True Neutral";
                break;
            case 9:
                myCharacter->Alignment = "Neutral Evil";
                break;
        }
    }
/*(SKILLS) (69 points)(8-15 max each)(user input)
(min-max num, modify & print remaining points to utilize, apply 0 to any remaining skills)
(if num < 8 || num > 15) err
else (num set to struct, total - num)
strength        
dexterity
constitution
intelligence
wisdom
charisma*/
    printf("Allocate your skill points! You have 69 total.");
    printf("How many skill points to Strength? (minimum 8, maximum 15)");
    scanf("%d", temp);
    if(temp < 8 || temp > 15)
    {
        printf("Error: Input points between 8 and 15");
    }
    else
    {
        minusTotal(skillPts, temp);
    }

}
int minusTotal(int skillPts, int temp)               //function definition
{
    myCh
    skillPts - temp;
}
