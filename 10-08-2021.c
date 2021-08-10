#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   
    int play;
    char playerName[20];
    
    printf("\n****************** Welcome to the Pokemon Game in C! ******************\n");
    printf("\n****************** Game made by: Scaramovistk ******************\n");
    delay(1);
    do{
        
         printf("\n**** Choose a option: ***\n");
         printf("1 - START\n");
         printf("2 - CLOSE\n");
         scanf("%i", &play);
        
        if(play == 1)
        {   
            
            struct ptions{
                int Rption;
                int Sption;
                int Mption;
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
                int xp;
                int level;
            };

            struct evolv
            {   
                int Fevolv;
                int Sevolv;
                int Tevolv;
                struct atri Fevolv;
                struct atri Sevolv;
                struct atri Tevolv;
            };

            struct pPokmon
            {   
                struct atri atri;
                struct atk atk;
                struct ptions ptions;
                struct lv lv;
                struct evolv evolv;
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
            delay(1);
            printf("Congratulations %s! The %s is a great choise! Lets explore Kanto to find news pokemons!", playerName, pPokmon.atri.pokemonName);
            delay(1);
            printf("Can you see a Zubat in that tree? Lets fight with it!\n");
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
            
            //****************************** END Enymi Pokemons Atributes END ******************************

            battle(pPokmon.atri.pokemonName, pPokmon.atri.type, pPokmon.atri.pHp, pPokmon.atk.nAtk1, pPokmon.atk.mimAtk1, pPokmon.atk.mxAtk1, pPokmon.atk.nAtk2, pPokmon.atk.mimAtk2, pPokmon.atk.mxAtk2, pPokmon.atri.dodge, pPokmon.ptions.Rption, pPokmon.ptions.Sption, pPokmon.ptions.Mption, pPokmon.lv.xp, pPokmon.lv.level,
                   zubat.atri.pokemonName, zubat.atri.type, zubat.atri.pHp, zubat.atk.nAtk1, zubat.atk.mimAtk1, zubat.atk.mxAtk1, zubat.atk.nAtk2, zubat.atk.mimAtk2, zubat.atk.mxAtk2, zubat.atri.dodge);

            delay(1);

            // *** Fork for Florest and Rock ***
            printf("Now that you alredy now how to use your pokemon, you can choose to conitune your journy by going: \n1 - Florest Way \n2 - Rocks Way\n");
            scanf("%i", &wayChoise);
            
            if(wayChoise == 1)
            {   
                delay(1);
                printf("%s you have choice the florest way, its a hard way, Good Luck!\n", playerName);
                delay(1);
                printf("I will give you a potion to to make %s stronger!\n", pPokmon.atri.pokemonName);
                pPokmon.atri.pHp = hpPotion(pPokmon.atri.pHp, 1);
                delay(1);
                printf("Now %s has %iHP!\n", pPokmon.atri.pokemonName, pPokmon.atri.pHp);

            }else{

            }

        } else{}


    }while(play == 1);

    return 0;
}

// *********** Delay Function ***********
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

//*********** Potions *******************

// ** Hp Potion **
int hpPotion (int hp, int size)
{      
    int potential = rand() % 6 + 3;
    int newHp = hp  + (potential * size);

    return newHp;
}

// **** Calculate XP and Evolv ****

int evolution(int a){

}
int calculateXp(int pPName, int eHp, int xp, int level){ //, int Fevolv, int Sevolv, int Tevolv

    int newXp = eHp/5;
    xp = xp + newXp;

    printf("%iXP Won\n %s was %i ", newXp, pPName, xp);

    if(xp >= 100){delay(1);level++; printf("%s has evolved to level:%i\n", pPName, level);}

    switch(level){
        case 25:
        evolution(1);
        break;

        case 50:
        evolution(2);
        break;

        case 70:
        evolution(3);
        break;
    }

    return xp;
}

// ******************** Battle Function *********************************

// Variable that start whith 'p' is player atributs, 'e' is enimy atributs
int battle (int pPName, int pType, int pHp, int pNAtk1, int pMimAtk1, int pMxAtk1, int pNAtk2, int pMimAtk2, int pMxAtk2, int pDodge, int Rption, int Sption, int Mption, int xp, int level,
            int ePName, int eType, int eHp, int eNAtk1, int eMimAtk1, int eMxAtk1, int eNAtk2, int eMimAtk2, int eMxAtk2, int eDodge)
{
    int winner = 0;
    int pDamage, eDamage;
    int pCDodge, eCDodge; //Chance of Dodge
    int maxHp = pHp;

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
            printf("%s will attack with %s\n", pPName, pNAtk1); //Firts atk
            eDamage = rand() % pMxAtk1 + pMimAtk1;
        } else if (patk == 2){
            printf("%s will attack with %s\n", pPName, pNAtk2); // Second atk
            pDamage = rand() % pMxAtk2 + pMimAtk2;
        } else {
            printf("1 - Relugar Potion (%i) \n2 - Super Potion  (%i) \n3 - Max Potion (%i)\n", Rption, Sption, Mption);
            scanf("%i", &choisePotion);

            int heal;

            delay(1);
            if(choisePotion == 1 && Rption > 0)
            {   
                heal = 20;
                printf("%s heal %i with Regular Potion\n", pPName, heal);
                delay(1);
                pHp = pHp + heal;
                printf("Now %s has %iHP\n", pPName, pHp);

            } else if(choisePotion == 2 && Sption > 0){

                heal = 40;
                printf("%s heal %i with Super Potion\n", pPName, heal);
                delay(1);
                pHp = pHp + heal;
                printf("Now %s has %iHP\n", pPName, pHp);

            } else if (choisePotion >= 3 && Mption > 0){

                heal = maxHp;
                printf("%s heal %i with Max Potion\n", pPName, heal);
                delay(1);
                pHp = pHp + heal;
                printf("Now %s has %iHP\n", pPName, pHp);

            }  if(pHp >= maxHp){pHp = maxHp;}

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
    calculateXp(pPName, eHp, xp, level);

    return winner;
}
