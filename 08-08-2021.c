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
            struct atack{
                char *nAtk1, *nAtk2;
                int mimAtk1, mxAtk1; // mim and max atacks is the space of damage that the atack can give
                int mimAtk2, mxAtk2;
            };
            struct atributes{
            char *pokemonName;
            char *type; //This variabel will have the type of the pokemon
            int pHp; 
            struct atack atack;
            int dodge; //dodge is a porcentage 0 to 100 for the chance to dodge 
            };
             struct atributes playerPokemon;

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
                playerPokemon.pokemonName = "Charmander"; // Pokemon Name
                playerPokemon.type = "Fire"; //Type
                playerPokemon.pHp = 100;
                playerPokemon.atack.nAtk1 = "Bite"; //Atack Name
                playerPokemon.atack.mimAtk1 = 13;
                playerPokemon.atack.mxAtk1 = 19;
                playerPokemon.atack.nAtk2 = "Fire"; //Atack Name
                playerPokemon.atack.mimAtk2 = 6;
                playerPokemon.atack.mxAtk2 = 25;
                playerPokemon.dodge = 10;
                break;

                case 2:
                playerPokemon.pokemonName = "Bulbassour"; // Pokemon Name
                playerPokemon.type = "Glass"; //Type
                playerPokemon.pHp = 140; //Life
                playerPokemon.atack.nAtk1 = "Ram"; //Atack Name
                playerPokemon.atack.mimAtk1 = 10; 
                playerPokemon.atack.mxAtk1 = 15;
                playerPokemon.atack.nAtk2 = "Vine Whipe"; //Atack Name
                playerPokemon.atack.mimAtk2 = 3;
                playerPokemon.atack.mxAtk2 = 20;
                playerPokemon.dodge = 10; // Dodge
                break;

                default:
                playerPokemon.pokemonName = "Squirtle"; // Pokemon Name
                playerPokemon.type = "Water"; // Type
                playerPokemon.pHp = 100; //Life
                playerPokemon.atack.nAtk1 = "Tackle"; //Atack Name
                playerPokemon.atack.mimAtk1 = 6;
                playerPokemon.atack.mxAtk1 = 15;
                playerPokemon.atack.nAtk2 = "Buble"; //Atack Name
                playerPokemon.atack.mimAtk2 = 3;
                playerPokemon.atack.mxAtk2 = 20;
                playerPokemon.dodge = 25; //Dodge
                break;

            }
            delay(1);
            printf("Congratulations %s! The %s is a great choise! Lets explore Kanto to find news pokemons!", playerName, playerPokemon.pokemonName);
            delay(1);
            printf("Can you see a Zubat in that tree? Lets fight with it!\n");
            delay(1);

            // ********************************* Enymi Pokemons Atributes *********************************

            //ZUBAT
            struct atributes zubat;
                zubat.pokemonName = "Zubat"; // Pokemon Name
                zubat.type = "Poison"; // Type
                zubat.pHp = 70; //Life
                zubat.atack.nAtk1 = "Bite"; //Atack Name
                zubat.atack.mimAtk1 = 3;
                zubat.atack.mxAtk1 = 8;
                zubat.atack.nAtk2 = "Poisson"; //Atack Name
                zubat.atack.mimAtk2 = 1;
                zubat.atack.mxAtk2 = 15;
                zubat.dodge = 25; //Dodge
            
            //****************************** END Enymi Pokemons Atributes END ******************************

            battle(playerPokemon.pokemonName, playerPokemon.type, playerPokemon.pHp, playerPokemon.atack.nAtk1, playerPokemon.atack.mimAtk1, playerPokemon.atack.mxAtk1, playerPokemon.atack.nAtk2, playerPokemon.atack.mimAtk2, playerPokemon.atack.mxAtk2, playerPokemon.dodge,
                   zubat.pokemonName, zubat.type, zubat.pHp, zubat.atack.nAtk1, zubat.atack.mimAtk1, zubat.atack.mxAtk1, zubat.atack.nAtk2, zubat.atack.mimAtk2, zubat.atack.mxAtk2, zubat.dodge);

            delay(1);

            // *** Fork for Florest and Rock ***
            printf("Now that you alredy now how to use your pokemon, you can choose to conitune your journy by going: \n1 - Florest Way \n2 - Rocks Way\n");
            scanf("%i", &wayChoise);
            
            if(wayChoise == 1)
            {   
                delay(1);
                printf("%s you have choice the florest way, its a hard way, Good Luck!\n", playerName);
                delay(1);
                printf("I will give you a potion to to make %s stronger!\n", playerPokemon.pokemonName);
                playerPokemon.pHp = hpPotion(playerPokemon.pHp, 1);
                delay(1);
                printf("Now %s has %iHP!\n", playerPokemon.pokemonName, playerPokemon.pHp);

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

// ******************** Battle Function *********************************

// Variable that start whith 'p' is player atributs, 'e' is enimy atributs
int battle (int pPName, int pType, int pHp, int pNAtk1, int pMimAtk1, int pMxAtk1, int pNAtk2, int pMimAtk2, int pMxAtk2, int pDodge,
            int ePName, int eType, int eHp, int eNAtk1, int eMimAtk1, int eMxAtk1, int eNAtk2, int eMimAtk2, int eMxAtk2, int eDodge)
{
    int winner = 0;
    int pDamage, eDamage;
    int pCDodge, eCDodge; //Chance of Dodge

    srand(time(NULL));
    // Winner = 1 Player wins

    delay(3);
    printf("\nYou have enter in a battle against %s!\n", ePName);

    do{

        

        //Enimy Attack
        delay(1);
        printf("\nIts %s time!\n", ePName);
        int eAtack = rand() % 2 + 1; // Random atack
        if (eAtack == 1)
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

        
        //Player Atack
        int pAtack;
        printf("\n%s can attack with: \n1 - %s \n2 - %s\n", pPName, pNAtk1, pNAtk2);
        scanf("%i", &pAtack); //Choice the attack

        delay(1);
        if (pAtack == 1)
        {   
            printf("%s will attack with %s\n", pPName, pNAtk1); //Firts Atack
            eDamage = rand() % pMxAtk1 + pMimAtk1;
        } else{
            printf("%s will attack with %s\n", pPName, pNAtk2); // Second Atack
            pDamage = rand() % pMxAtk2 + pMimAtk2;
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

    return winner;
}
