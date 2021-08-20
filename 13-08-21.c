#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{   
    int play;
    char playerName[20];
    
    printf("\n****************** Welcome to the Pokemon Game in C! ******************\n");
    printf("\n****************** Game made by: Scaramovistk ******************\n");
    printf("\nDonation to: nano_1cigxh6k75ztoo1oioypei4qmhuzbmir81hic5t874mizo9pkhwzxxzd4dxm\n");
    delay(1);
    do{
        
         printf("\n**** Choose a option: ****\n");
         printf("1 - START\n");
         printf("2 - CLOSE\n");
         scanf("%i", &play);
        
        if(play == 1)
        {   
            
            struct ptions{
                int Rption; //Regular Potion
                int Sption; //Super Potion
                int Mption; //Max Potion
            };
            struct atk{
                char *nAtk1, *nAtk2;
                int mimAtk1, mxAtk1; // mim and max atks is the space of damage that the atk can give
                int mimAtk2, mxAtk2;
            };
            struct atri{
            char *pokemonName;
            char *type; //This variabel will have the type of the pokemon
            int pHp; 
            int dodge; //dodge is a porcentage 0 to 100 for the chance to dodge
            };

            struct lv{
                int xp; //Xp 0-100
                int level; //Level 1-100
            };

            struct fEvolv //First Evolv
            {   
                struct atri tributF;
                struct atk atkF;
            };

            struct pPokmon
            {   
                struct atri atri;
                struct atk atk;
                struct ptions ptions;
                struct lv lv;
                struct fEvolv fEvolv;
            };
            
            
            struct pPokmon pPokmon;

            int wayChoise;
            int pokemonChoise = 0;

            printf("*** Digit your name to start ***\n");
            scanf("%s", playerName);

            delay(1);
            printf("Welcome to Kanto %s! Here we have diferent types of Pokemon!\n");
            printf("%s you can start your adventure choosing one of this 3 pokemons\n");
            delay(1);
            printf("\n1 - Charmander\n Type: Fire\n Hp:100\n Attacks: Bite and Fire\n Weakenes: Water\n\n");
            delay(1);
            printf("\n2 - Bulbassour\n Type: Glass\n Hp:140\n Attacks: Ram and Vine Whipe\n Weakenes: Fire\n\n");
            delay(1);
            printf("\n3 - Squirtle\n Type: Water\n Hp:100\n Attacks: Tackle and Buble\n Weakenes: Glass\n\n");
            scanf("%i", &pokemonChoise);

            // ******************************* Pokemon Choice*******************************

            switch(pokemonChoise){
                case 1:
                pPokmon.atri.pokemonName = "Charmander"; // Pokemon Name
                pPokmon.atri.type = "Fire"; //Type
                pPokmon.atri.pHp = 100;
                pPokmon.atk.nAtk1 = "Bite"; //atk Name
                pPokmon.atk.mimAtk1 = 13;
                pPokmon.atk.mxAtk1 = 19;
                pPokmon.atk.nAtk2 = "Fire"; //atk Name
                pPokmon.atk.mimAtk2 = 6;
                pPokmon.atk.mxAtk2 = 25;
                pPokmon.atri.dodge = 10; //Dodge
                pPokmon.ptions.Rption = 3; //ptions
                pPokmon.ptions.Sption = 0;
                pPokmon.ptions.Mption = 0;
                pPokmon.lv.xp = 0;
                pPokmon.lv.level = 1;
                // First Evolution 
                pPokmon.fEvolv.tributF.pokemonName = "Charmelion"; pPokmon.fEvolv.tributF.pHp = 200;pPokmon.fEvolv.atkF.mimAtk1 = 8; pPokmon.fEvolv.atkF.mxAtk1 = 25; pPokmon.fEvolv.atkF.mimAtk2 = 1; pPokmon.fEvolv.atkF.mxAtk2 = 45;
                break;

                case 2:
                pPokmon.atri.pokemonName = "Bulbassour"; // Pokemon Name
                pPokmon.atri.type = "Glass"; //Type
                pPokmon.atri.pHp = 140; //Life
                pPokmon.atk.nAtk1 = "Ram"; //atk Name
                pPokmon.atk.mimAtk1 = 10; 
                pPokmon.atk.mxAtk1 = 15;
                pPokmon.atk.nAtk2 = "Vine Whipe"; //atk Name
                pPokmon.atk.mimAtk2 = 3;
                pPokmon.atk.mxAtk2 = 20;
                pPokmon.atri.dodge = 10; // Dodge
                pPokmon.ptions.Rption = 3; //ptions
                pPokmon.ptions.Sption = 0;
                pPokmon.ptions.Mption = 0;
                pPokmon.lv.xp = 0;
                pPokmon.lv.level = 1;
                break;

                default:
                pPokmon.atri.pokemonName = "Squirtle"; // Pokemon Name
                pPokmon.atri.type = "Water"; // Type
                pPokmon.atri.pHp = 100; //Life
                pPokmon.atk.nAtk1 = "Tackle"; //atk Name
                pPokmon.atk.mimAtk1 = 6;
                pPokmon.atk.mxAtk1 = 15;
                pPokmon.atk.nAtk2 = "Buble"; //atk Name
                pPokmon.atk.mimAtk2 = 3;
                pPokmon.atk.mxAtk2 = 20;
                pPokmon.atri.dodge = 25; //Dodge
                pPokmon.ptions.Rption = 3; //Potions
                pPokmon.ptions.Sption = 0;
                pPokmon.ptions.Mption = 0;
                pPokmon.lv.xp = 0;
                pPokmon.lv.level = 1;
                break;

            }

            // *** Pointer to new level atributes ***
            char *newName = &pPokmon.atri.pokemonName;
            int *newHp = &pPokmon.atri.pHp;
            int *newXp = &pPokmon.lv.xp; 
            int *newLevel = &pPokmon.lv.level; 
            int *newMimAtk1 = &pPokmon.atk.mimAtk1; 
            int *newMxAtk1 = &pPokmon.atk.mxAtk1;
            int *newMimAtk2 = &pPokmon.atk.mimAtk2; 
            int *newMxAtk2 = &pPokmon.atk.mxAtk2;


            delay(1);
            printf("Congratulations %s! The %s is a great choise! Lets explore Kanto to find news pokemons!", playerName, pPokmon.atri.pokemonName);
            delay(1);
            printf("\nCan you see a Zubat in that tree? Lets fight with it!\n");
            delay(1);

            // ********************************* Enymi Pokemons Atributes *********************************

            //ZUBAT
            struct pPokmon zubat;
                zubat.atri.pokemonName = "Zubat"; // Pokemon Name
                zubat.atri.type = "Poison"; // Type
                zubat.atri.pHp = 70; //Life
                zubat.atk.nAtk1 = "Bite"; //atk Name
                zubat.atk.mimAtk1 = 3;
                zubat.atk.mxAtk1 = 8;
                zubat.atk.nAtk2 = "Poisson"; //atk Name
                zubat.atk.mimAtk2 = 1;
                zubat.atk.mxAtk2 = 15;
                zubat.atri.dodge = 25; //Dodge

            //RATATA
            struct pPokmon ratata;
                ratata.atri.pokemonName = "Ratata"; // Pokemon Name
                ratata.atri.type = "Normal"; // Type
                ratata.atri.pHp = 70; //Life
                ratata.atk.nAtk1 = "Run Away"; //atk Name
                ratata.atk.mimAtk1 = 3;
                ratata.atk.mxAtk1 = 8;
                ratata.atk.nAtk2 = "Guts"; //atk Name
                ratata.atk.mimAtk2 = 1;
                ratata.atk.mxAtk2 = 15;
                ratata.atri.dodge = 35; //Dodge

            //Zigzagoon
            struct pPokmon zigzagoon;
                zigzagoon.atri.pokemonName = "Zigzagoon"; // Pokemon Name
                zigzagoon.atri.type = "Normal"; // Type
                zigzagoon.atri.pHp = 70; //Life
                zigzagoon.atk.nAtk1 = "Pickup"; //atk Name
                zigzagoon.atk.mimAtk1 = 5;
                zigzagoon.atk.mxAtk1 = 10;
                zigzagoon.atk.nAtk2 = "Quick Feet"; //atk Name
                zigzagoon.atk.mimAtk2 = 3;
                zigzagoon.atk.mxAtk2 = 18;
                zigzagoon.atri.dodge = 20; //Dodge
            
            //Scyther
            struct pPokmon scyther;
                scyther.atri.pokemonName = "Scyther"; // Pokemon Name
                scyther.atri.type = "Bug"; // Type
                scyther.atri.pHp = 200; //Life
                scyther.atk.nAtk1 = "Swarm"; //atk Name
                scyther.atk.mimAtk1 = 7;
                scyther.atk.mxAtk1 = 20;
                scyther.atk.nAtk2 = "Steadfast"; //atk Name
                scyther.atk.mimAtk2 = 1;
                scyther.atk.mxAtk2 = 45;
                scyther.atri.dodge = 35; //Dodge

            
            //****************************** END Enymi Pokemons Atributes END ******************************

            battle(pPokmon.atri.pokemonName, pPokmon.atri.type, pPokmon.atri.pHp, pPokmon.atk.nAtk1, pPokmon.atk.mimAtk1, pPokmon.atk.mxAtk1, pPokmon.atk.nAtk2, pPokmon.atk.mimAtk2, pPokmon.atk.mxAtk2, pPokmon.atri.dodge, pPokmon.ptions.Rption, pPokmon.ptions.Sption, pPokmon.ptions.Mption, pPokmon.lv.xp, pPokmon.lv.level,
                   pPokmon.fEvolv.tributF.pokemonName, pPokmon.fEvolv.tributF.pHp, pPokmon.fEvolv.atkF.mimAtk1, pPokmon.fEvolv.atkF.mxAtk1, pPokmon.fEvolv.atkF.mimAtk2, pPokmon.fEvolv.atkF.mxAtk2,
                   zubat.atri.pokemonName, zubat.atri.type, zubat.atri.pHp, zubat.atk.nAtk1, zubat.atk.mimAtk1, zubat.atk.mxAtk1, zubat.atk.nAtk2, zubat.atk.mimAtk2, zubat.atk.mxAtk2, zubat.atri.dodge,
                   newName, newHp, newXp, newLevel, newMimAtk1, newMxAtk1, newMimAtk2, newMxAtk2);

            delay(3);

            // *** Fork for Florest and Rock ***
            printf("\nNow that you alredy now how to use your pokemon, you can choose to conitune your journy by going: \n1 - Forest Way \n2 - Rocks Way\n");
            scanf("%i", &wayChoise);
            
            if(wayChoise == 1)
            {   
                delay(1);
                printf("%s you have choice the forest way, its a hard way\n", playerName);
                delay(1);
                printf("\nI will give you some Super Potions to help your journy, Good Luck!\n");
                printf("%s won (5) Super Potions\n", playerName);
                pPokmon.ptions.Sption = 5;
                delay(1);
                
                // ********** Battle **********

                printf("\n%s is walking in the forest and find a %s\n Do you want to battle?\n", playerName, ratata.atri.pokemonName);
                delay(1);
                printf("1 - Yes\n2 - No\n");
                scanf("%i", &wayChoise);

                if(wayChoise == 1)
                {
                    battle(pPokmon.atri.pokemonName, pPokmon.atri.type, pPokmon.atri.pHp, pPokmon.atk.nAtk1, pPokmon.atk.mimAtk1, pPokmon.atk.mxAtk1, pPokmon.atk.nAtk2, pPokmon.atk.mimAtk2, pPokmon.atk.mxAtk2, pPokmon.atri.dodge, pPokmon.ptions.Rption, pPokmon.ptions.Sption, pPokmon.ptions.Mption, pPokmon.lv.xp, pPokmon.lv.level,
                   pPokmon.fEvolv.tributF.pokemonName, pPokmon.fEvolv.tributF.pHp, pPokmon.fEvolv.atkF.mimAtk1, pPokmon.fEvolv.atkF.mxAtk1, pPokmon.fEvolv.atkF.mimAtk2, pPokmon.fEvolv.atkF.mxAtk2,
                   ratata.atri.pokemonName, ratata.atri.type, ratata.atri.pHp, ratata.atk.nAtk1, ratata.atk.mimAtk1, ratata.atk.mxAtk1, ratata.atk.nAtk2, ratata.atk.mimAtk2, ratata.atk.mxAtk2, ratata.atri.dodge,
                   newName, newHp, newXp, newLevel, newMimAtk1, newMxAtk1, newMimAtk2, newMxAtk2);

                } else { delay(1); printf("You has moved on from %s\n", ratata.atri.pokemonName);}

            // **** Player Found an NPC ****
            printf("\nFar away you can see a silhouette, look like that is a person\n"); delay(2);

            if(wayChoise == 1){ printf("\nI saw you in a battle against %s, you are so good at this.\n So i need your help\n", ratata.atri.pokemonName);delay(1);} 
            else{ printf("\nDid you saw that %s, there is a loot of Pokemons here.\n I think you can help me with a problem\n", ratata.atri.pokemonName);delay(1);}

            printf("There is a %s in this forest, and its dagerous for the local people\n If you find it please defet it\n", scyther.atri.pokemonName);delay(1);
            delay(2);
            printf("\nThis Pokemon look so strong, i need to earn more xp and its better if a take more care when walking\n");
            
            // ********** Battle **********
            printf("\n%s is walking in the forest and find a %s\n Do you want to battle?\n", playerName, zigzagoon.atri.pokemonName);
                delay(1);
                printf("1 - Yes\n2 - No\n");
                scanf("%i", &wayChoise);

                if(wayChoise == 1)
                {
                    battle(pPokmon.atri.pokemonName, pPokmon.atri.type, pPokmon.atri.pHp, pPokmon.atk.nAtk1, pPokmon.atk.mimAtk1, pPokmon.atk.mxAtk1, pPokmon.atk.nAtk2, pPokmon.atk.mimAtk2, pPokmon.atk.mxAtk2, pPokmon.atri.dodge, pPokmon.ptions.Rption, pPokmon.ptions.Sption, pPokmon.ptions.Mption, pPokmon.lv.xp, pPokmon.lv.level,
                   pPokmon.fEvolv.tributF.pokemonName, pPokmon.fEvolv.tributF.pHp, pPokmon.fEvolv.atkF.mimAtk1, pPokmon.fEvolv.atkF.mxAtk1, pPokmon.fEvolv.atkF.mimAtk2, pPokmon.fEvolv.atkF.mxAtk2,
                   zigzagoon.atri.pokemonName, zigzagoon.atri.type, zigzagoon.atri.pHp, zigzagoon.atk.nAtk1, zigzagoon.atk.mimAtk1, zigzagoon.atk.mxAtk1, zigzagoon.atk.nAtk2, zigzagoon.atk.mimAtk2, zigzagoon.atk.mxAtk2, zigzagoon.atri.dodge,
                   newName, newHp, newXp, newLevel, newMimAtk1, newMxAtk1, newMimAtk2, newMxAtk2);

                } else { delay(1); printf("You has moved on from %s\n", zigzagoon.atri.pokemonName);}


            }else{
                // ROCK WAY
            }

        } else{}


    }while(play == 1);

    return 0;
}

// *********** Delay Function ***********
void delay(int number_of_seconds)
{
  
    int milli_seconds = 1000 * number_of_seconds;
  
    clock_t start_time = clock();
  
    while (clock() < start_time + milli_seconds);
}

//*********** Potions *******************



// **** Calculate XP and Evolv ****

int calculateXp(char *pPName, int eHp, int xp){ //, int Fevolv, int Sevolv, int Tevolv

    int newXp = eHp*2;
    xp = xp + newXp;

    printf("\n%iXP Won\n%s now was %iXP\n ", newXp, pPName, xp);

    return xp;
}

int calculateLevel(char *pPName,int xp, int *level, int *hp, 
     int *mimAtk1,int *mxAtk1, int *mimAtk2, int *mxAtk2){
    
    if(xp >= 100){
    
    int vLevel = *level;
    int vHp = *hp;
    int vmimAtk1 = *mimAtk1;
    int vmxAtk1 = *mxAtk1;
    int vmimAtk2 = *mimAtk2;
    int vmxAtk2 = *mxAtk2;

    *level = vLevel + 1; 
    *hp = ceil(vHp * 1.03);
    *mimAtk1 = ceil(vmimAtk1 * 1.03);
    *mxAtk1 = ceil(vmxAtk1 * 1.03);
    *mimAtk2 = ceil(vmimAtk2 * 1.03);
    *mxAtk2 = ceil(vmxAtk2 * 1.03);

    delay(1);
    printf("\n%s has evolved to level:%i \nHP = %i \nMim Atack 1 = %i \nMax Atack 1 = %i \nMim Atack 2 = %i \nMax Atack 2 = %i\n", 
    pPName, *level, *hp, *mimAtk1, *mxAtk1, *mimAtk2, *mxAtk2);

    }

    return level;
}
int calculateEvolution(int level, char *pokemonName, int *hp, int *mimAtk1,int *mxAtk1, int *mimAtk2, int *mxAtk2,
  int fName, int fHp, int fMimatk1, int fMxatk1, int fMimatk2, int fMxatk2){
      level = 10;
    switch(level){
        case 10:
        *pokemonName = fName;
        *hp = fHp;
        *mimAtk1 = fMimatk1;
        *mxAtk1 = fMxatk1;
        *mimAtk2 = fMimatk2;
        *mxAtk2 = fMxatk2; 
        break;
    }

    return level;
}

// ******************** Battle Function *********************************

// Variable that start whith 'p' is player atributs, 'e' is enimy atributs
int battle (char *pPName, char *pType, int pHp, char *pNAtk1, int pMimAtk1, int pMxAtk1, char *pNAtk2, int pMimAtk2, int pMxAtk2, int pDodge, int Rption, int Sption, int Mption, int xp, int level,
            int fName, int fHp, int fMimatk1, int fMxatk1, int fMimatk2, int fMxatk2,
            char *ePName, char *eType, int eHp, char *eNAtk1, int eMimAtk1, int eMxAtk1, char *eNAtk2, int eMimAtk2, int eMxAtk2, int eDodge,
            char *newName, int *newHp, int *newXp, int *newLevel, int *newMimAtk1, int *newMxAtk1, int *newMimAtk2, int *newMxAtk2)
{
    int winner = 0;
    int pDamage, eDamage;
    int pCDodge, eCDodge; //Chance of Dodge
    int pMaxHp = pHp, eMaxHp = eHp;

    srand(time(NULL));
    // Winner = 1 Player wins

    delay(3);
    printf("\nYou have enter in a battle against %s!\n", ePName);

    do{

        //Enimy Attack
        delay(1);
        printf("\nIts %s time!\n", ePName);
        int eatk = rand() % 2 + 1; // Random atk
        if (eatk == 1)
        {   
            printf("%s will attack with %s\n", ePName, eNAtk1);
            eDamage = rand() % eMxAtk1 + eMimAtk1;
        } else{
            printf("%s will attack with %s\n", ePName, eNAtk2);
            eDamage = rand() % eMxAtk2 + eMimAtk2;
        }
        pCDodge = rand() % 100 + 1;
        delay(1);
        if(pCDodge > pDodge) //Dodge
        {
            pHp = pHp - eDamage; 
            printf("%s gave you %i, you have %iHP.\n", ePName, eDamage, pHp);
        } else{
            printf("%s has dodge the attack\n", pPName);
            printf("%s has %iHP\n", pPName, pHp);
        }
        delay(2);
        if(pHp <= 0){printf("%s have died, try again\n", pPName); continue;} //Reset the battle

        
        //Player atk
        int patk;
        int choisePotion;
        printf("\n%s can attack with: \n1 - %s \n2 - %s\n3 - Potions\n", pPName, pNAtk1, pNAtk2);
        scanf("%i", &patk); //Choice the attack

        delay(1);
        if (patk == 1)
        {   
            printf("\n%s will attack with %s\n", pPName, pNAtk1); //Firts atk
            pDamage = rand() % pMxAtk1 + pMimAtk1;
        } else if (patk == 2){
            printf("\n%s will attack with %s\n", pPName, pNAtk2); // Second atk
            pDamage = rand() % pMxAtk2 + pMimAtk2;
        } else if (patk == 3){
            printf("\n1 - Relugar Potion (%i) \n2 - Super Potion  (%i) \n3 - Max Potion (%i)\n", Rption, Sption, Mption); //Potion
            scanf("%i", &choisePotion);

            int heal;

            delay(1);
            if(choisePotion == 1 && Rption > 0)
            {   
                heal = 20;
                printf("%s heal %i with Regular Potion\n", pPName, heal);
                delay(1);
                pHp = pHp + heal;
                if(pHp >= pMaxHp){pHp = pMaxHp;}
                printf("Now %s has %iHP\n\n", pPName, pHp);
                Rption --;

            } else if(choisePotion == 2 && Sption > 0){

                heal = 50;
                printf("%s heal %i with Super Potion\n", pPName, heal);
                delay(1);
                pHp = pHp + heal;
                if(pHp >= pMaxHp){pHp = pMaxHp;}
                printf("Now %s has %iHP\n\n", pPName, pHp);
                Sption --;

            } else if (choisePotion >= 3 && Mption > 0){

                heal = pMaxHp;
                printf("%s heal %i with Max Potion\n", pPName, heal);
                delay(1);
                pHp = pHp + heal;
                if(pHp >= pMaxHp){pHp = pMaxHp;}
                printf("Now %s has %iHP\n\n", pPName, pHp);
                Mption --;

            }  if(pHp >= pMaxHp){pHp = pMaxHp;}

        } else {
            //Change Pokemon
        }

        eCDodge = rand() % 100 + 1;
        if(eCDodge > eDodge) //Dodge chance
        {
            eHp = eHp- pDamage; 
            printf("%s gave %i, %s have %iHP.\n", pPName, pDamage, ePName,eHp);
        } else{
            printf("%s has dodge the attack\n", ePName);
            printf("%s has %iHP\n", ePName, eHp);
        }
        eDamage = 0; 
        pDamage = 0;

        delay(2);
        if(eHp <= 0){winner = 1;} //Winn
        
    }while(winner == 0);

    delay(1);
    printf("%s has died %s Winns!", ePName, pPName);

    *newXp = calculateXp(pPName, eMaxHp, xp);
    calculateLevel(pPName, newXp, newLevel, newHp, newMimAtk1, newMxAtk1, newMimAtk2, newMxAtk2);
    calculateEvolution(level, newName, newHp, newMimAtk1, newMxAtk1, newMimAtk2, newMxAtk2,
  fName, fHp, fMimatk1, fMxatk1, fMimatk2, fMxatk2);

    return winner;
}
