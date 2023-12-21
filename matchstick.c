#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inst()
{
    printf("\n*******************************************************************************************\n\n");
    printf("\t\t\t Welcome to the matchstick game \n\n");
    printf("********************************************************************************************\n");
    printf("\n_________________________________________________________________________________________\n\n");

    printf(" Instructions of the game : \n\n");
    printf("1. This game is played between two players or between player and computer.\n");
    printf("2. Here there are total 21 matchsticks.\n");
    printf("3. You can choose maximum 5 matchsticks at a time.\n");
    printf("4. The player to pick the last matchstick will loose the game.");
    printf("\n\n");

    printf("so, let's begin the game.....");
    printf("\nBest of luck");
    printf("\n_________________________________________________________________________________________\n\n");
}

void game_players()
{
    int mstick=21,player1,player2;
    printf("\nYou have choose to play with friend.\n");
    printf("\n_________________________________________________________________________________________\n\n");

    while(mstick>1)
    {
        printf("\n Player 1, Enter the number of matchsticks :");
        scanf("%d",&player1);

        if(player1>5)
        {
            printf("\nPlease enter any number between 1 to 5 \n");
            continue;
        }

        while(mstick-player1<1)
        {
            printf("\nPlease enter any number between 1 to %d : ",mstick);
            scanf("%d",&player1);
        }

        mstick=mstick-player1;

        if(mstick<=1)
        {
            printf("\nOops, \nPlayer 2 has to pick the last matchstick.\n");
            printf("\nSorry, Player 2 you lost the match.\n");
            break;
        }
        printf("\nNumber of matchsticks left is %d\n",mstick);
        printf("\n\n---------------------------------------------------------------------------------------\n");

        printf("\nPlayer 2, Enter the number of matchsticks : ");
        scanf("%d",&player2);

        if(player2>5)
        {
            printf("\nPlease enter any number between 1 to 5 \n");
            continue;
        }

        while(mstick-player2<1)
        {
            printf("\nPlease enter any number between 1 to %d : ",mstick);
            scanf("%d",&player2);
        }

        mstick=mstick-player2;

        if(mstick<=1)
        {
            printf("\nOops, \nPlayer 1 has to pick the last matchstick.\n");
            printf("\nSorry, Player 1 you lost the match.\n");
            break;
        }

        printf("\nNumber of matchsticks left is %d\n",mstick);
        printf("\n\n---------------------------------------------------------------------------------------\n");
    }
}

void game_player_computer()
{
    int mstick=21,player,computer;
    printf("\nYou have choose to play with computer.\n");
    printf("\n______________________________________________________________________________________________\n");

    while(mstick>1)
    {
        printf("\n Enter the number of matchsticks :");
        scanf("%d",&player);

        if(player>5)
        {
            printf("\nPlease enter any number between 1 to 5\n");
            continue;
        }

        while(mstick-player<1)
        {
            printf("\nPlease enter any number between 1 to %d : ",mstick);
            scanf("%d",&player);
        }

        mstick=mstick-player;
        printf("\nNumber of matchsticks left is %d\n",mstick);
        printf("\n\n--------------------------------------------------------------------------------------------\n");

        if(mstick<=1)
        {
            printf("\n-------------------------------------------------------------------------------------------\n");
            printf("\nCongratulations....You won the game.\n");
            break;
        }

        srand((time(0)));
        computer=rand()%6;
        printf("\nNumber of matchstick taken by computer is %d\n",computer);
        mstick=mstick-computer;

        if(mstick<=1)
        {
            printf("\n-------------------------------------------------------------------------------------------\n");
            printf("\nOops, \nYou have to pick the last matchstick.\n");
            printf("\nSorry, you lost the match.");
            break;
        }
        printf("\nNumber of matchsticks left is %d\n",mstick);
        printf("\n\n------------------------------------------------------------------------------------------------\n");
    }
}

int main()
{
    int choice,opt;
    inst();

    printf("Enter 1 to play with computer : \n");
    printf("Enter 2 to play with friend : \n");
    scanf("%d",&choice);
    printf("\n______________________________________________________________________________________\n");

    if(choice==1)
    {
        game_player_computer();
    }
    else if(choice==2)
    {
        game_players();
    }
    return 0;
}



