#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   
    int play;
    char playerName[20];
    
    printf("Welcome to the Pokemon Game in C!\n");
    printf("Game made by: Scaramovistk\n");

    do{
        
         printf("Choose a option:\n");
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

            int pokemonChoise = 0;
            printf("Digit your name to start\n");
            scanf("%s", playerName);

            printf("Welcome to Kanto %s! Here we have diferent types of Pokemon!\n");
            printf("%s you can start your adventure choosing one of this 3 pokemons\n");
            printf("\n1 - Charmander\n Type: Fire\n Hp:100\n Attacks: Bite and Fire\n Weakenes: Water\n\n");
            printf("\n2 - Bulbassour\n Type: Glass\n Hp:140\n Attacks: Ram and Vine Whipe\n Weakenes: Fire\n\n");
            printf("\n3 - Squirtle\n Type: Water\n Hp:100\n Attacks: Tackle and Buble\n Weakenes: Glass\n\n");
            scanf("%i", &pokemonChoise);

            // Giving the atributs to the player pokemon
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
            printf("Congratulations %s! The %s is a great choise! Lets explore the city to find news pokemons!", playerName, playerPokemon.pokemonName);

        } else{}


    }while(play == 1);

    return 0;
}
