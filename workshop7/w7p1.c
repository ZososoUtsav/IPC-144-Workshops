/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
Full Name  : Utsav Gautam
Student ID#: 157891219
Email      : ugautam4@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// macros
#define MIN_LIFE 1
#define MAX_LIFE 10
#define MULTIPLE 5
#define MINIMUM_PATH_LENGTH 10
#define MAXIMUM_PATH_LENGTH 70

// we declare the structures here
struct PlayerInfo
{
    int lives;
    int numTreasures;
    int history[MAXIMUM_PATH_LENGTH];
    char character;
};

struct GameInfo
{
    int maxNumMoves;
    int pathLength;
    int bombs[MAXIMUM_PATH_LENGTH];
    int treasure[MAXIMUM_PATH_LENGTH];
};

int main(void)
{
    struct PlayerInfo player = {0};
    struct GameInfo game = {0};
    int flag = 0, i = 0, j = 0;

    printf("================================\n");
    printf("         Treasure Hunt!\n");
    printf("================================\n\n");

    printf("PLAYER Configuration\n");
    printf("--------------------\n");

    // get character from the user
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.character);

    // store number of lines
    do
    {
        flag = 0;

        printf("Set the number of lives: ");
        scanf("%d", &player.lives);

        if (player.lives < MIN_LIFE || player.lives > MAX_LIFE)
        {
            printf("     Must be between %d and %d!\n", MIN_LIFE, MAX_LIFE);

            flag = 1;
        }
    } while (flag);

    // reset game history played before (previous)
    for (i = 0; i < MAXIMUM_PATH_LENGTH; i++)
    {
        player.history[i] = 0;
    }

    printf("Player configuration set-up is complete\n\n");

    printf("GAME Configuration\n");
    printf("------------------\n");

    // store number of length
    do
    {
        flag = 0;

        printf("Set the path length (a multiple of %d between %d-%d): ", MULTIPLE, MINIMUM_PATH_LENGTH, MAXIMUM_PATH_LENGTH);
        scanf("%d", &game.pathLength);

        if ((game.pathLength % MULTIPLE) != 0 || (game.pathLength < MINIMUM_PATH_LENGTH) || (game.pathLength > MAXIMUM_PATH_LENGTH))
        {
            printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MINIMUM_PATH_LENGTH, MAXIMUM_PATH_LENGTH);

            flag = 1;
        }
    } while (flag);

    // store number of moves
    do
    {
        flag = 0;

        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &game.maxNumMoves);

        if ((game.maxNumMoves < player.lives) || game.maxNumMoves > (int)(game.pathLength * 0.75))
        {
            printf("    Value must be between %d and %d\n", player.lives, (int)(game.pathLength * 0.75));

            flag = 1;
        }
    } while (flag);
    printf("\n");

    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of %d where a value\n", MULTIPLE);
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);

    // Initiating the flag for the bomb set storage interaction
    j = 0;

    // Initiating the interaction to indicate the set of bomb positions
    for (i = 0; i < (game.pathLength / MULTIPLE); i++)
    {

        printf("   Positions [%2d-%2d]: ", (MULTIPLE * i) + 1, (MULTIPLE * i) + MULTIPLE);

        // Initiating interaction to store bomb set
        do
        {
            scanf("%d", &game.bombs[j]);
            j++;
        } while (j < (MULTIPLE * i) + MULTIPLE);
    }
    printf("BOMB placement set\n\n");

    printf("TREASURE Placement\n");
    printf("------------------\n");
    printf("Enter the treasure placements in sets of %d where a value\n", MULTIPLE);
    printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.pathLength);

    // Initiating the flag for the treasure set storage interaction
    j = 0;

    // Initiating the interaction to indicate the set of treasure positions
    for (i = 0; i < (game.pathLength / MULTIPLE); i++)
    {

        printf("   Positions [%2d-%2d]: ", (MULTIPLE * i) + 1, (MULTIPLE * i) + MULTIPLE);

        // Initiating interaction to store treasure set
        do
        {
            scanf("%d", &game.treasure[j]);
            j++;
        } while (j < (MULTIPLE * i) + MULTIPLE);
    }
    printf("TREASURE placement set\n\n");

    // Presentation of settings
    printf("GAME configuration set-up is complete...\n\n");

    printf("------------------------------------\n");
    printf("TREASURE HUNT Configuration Settings\n");
    printf("------------------------------------\n");
    printf("Player:\n");

    // Presentation Player Character
    printf("   Symbol     : %c\n", player.character);
    // Number of lives presentation
    printf("   Lives      : %d\n", player.lives);
    printf("   Treasure   : [ready for gameplay]\n");
    printf("   History    : [ready for gameplay]\n\n");

    printf("Game:\n");

    // Game length number display
    printf("   Path Length: %d\n", game.pathLength);

    // Iteration for displaying bombs positions with number 1
    printf("   Bombs      : ");
    for (i = 0; i < game.pathLength; i++)
    {
        printf("%d", game.bombs[i]);
    }
    printf("\n");

    // Iteration for displaying treasure positions with number 1
    printf("   Treasure   : ");
    for (i = 0; i < game.pathLength; i++)
    {
        printf("%d", game.treasure[i]);
    }
    printf("\n\n");

    printf("====================================\n");
    printf("~ Get ready to play TREASURE HUNT! ~\n");
    printf("====================================\n");

    return 0;
}
