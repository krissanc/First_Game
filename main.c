

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define X_BORDER    13
#define Y_BORDER    13


int main()
{
    // Create a 2D array that will be our playing field
    char game_Grid[X_BORDER][Y_BORDER];

    // Generate our character
    typedef struct
    {
        int x;
        int y;
    }PLAYER_LOCATION_t;

    PLAYER_LOCATION_t player = { X_BORDER/2, Y_BORDER/2 };

    while(1)
    {

        // Fill the grid with dots
        for(int row = 0; row < X_BORDER; row++)
        {
            for(int column = 0; column < Y_BORDER; column++)
            {
                if(column == player.x && row == player.y)
                {
                    game_Grid[row][column] = '#';
                }
                else
                {
                    if(game_Grid[row][column] != '.')
                    {
                        game_Grid[row][column] = '.';
                    }
                    else
                    {
                        // Do nothing to save processing power
                    }

                }

            }
        }

        // Print the grid
        for(int row = 0; row < X_BORDER; row++)
        {
            for(int column = 0; column < Y_BORDER; column++)
                {
                    printf(" %c ", game_Grid[row][column]);
                }
                printf("\n");
        }

        // Move with the wasd keys

        // Catch the user button input
        char user_Input = getch();


        switch(user_Input)
        {
            case 'a':
                if(player.x > 0)
                {
                    player.x--;
                }
                break;
            case 'd':
                if(player.x <= X_BORDER - 2)
                {
                    player.x++;
                }
                break;
            case 'w':
                if(player.y > 0)
                {
                    player.y--;
                }
                break;
            case 's':
                if(player.y <= Y_BORDER - 2)
                {
                    player.y++;
                }
                break;

        }   // END OF SWITCH

        system("cls");


    }   // END OF WHILE




    return 0;   // END OF MAIN
}


