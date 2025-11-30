#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int x = 1;              // player position (0 to 2)
    int step = 0;           // obstacle vertical movement
    int obstaclePos = rand() % 3;   // 0,1,2 lane

    int score = 0;       //score 
    int lives = 3;      //Lives
    int speed = 120;   //speed

    while (1) {

        // ---- INPUT ----
        if (_kbhit()) {
            char ch = getch();

            if (ch == 75 && x > 0)        // LEFT arrow
                x--;

            if (ch == 77 && x < 2)        // RIGHT arrow
                x++;
        }

        // ---- DRAW ----
        system("cls");
        printf("|--- --- ---|\n");
        printf("Score: %d   Lives: %d\n",score,lives); //lives and socre modification

        for (int i = 0; i < 10; i++) {
            if (i == step) {

                if (obstaclePos == 0)
                    printf("| %c        |\n", 1);

                else if (obstaclePos == 1)
                    printf("|     %c    |\n", 1);

                else if (obstaclePos == 2)
                    printf("|        %c |\n", 1);

            } else {
                printf("|           |\n");
            }
        }

        // ---- PLAYER ----
        if (x == 0)
            printf("| %c        |\n", 6);
        else if (x == 1)
            printf("|     %c    |\n", 6);
        else if (x == 2)
            printf("|        %c |\n", 6);

        // ---- COLLISION ----
        if (step == 10 && x == obstaclePos) {
            
            lives--;  // lives lost

            if(lives == 0){

                system("cls");
                printf("|--- --- ---|\n");
                printf("Score: %d   Lives: %d\n",score,lives);
                
                printf("\nGAME OVER!\n");
                break;
        }
            printf("You lost a life!    Lives left:%d\n",lives);
            Sleep(700);

            step = 0;
            obstaclePos = rand() % 3;
            continue;
        }

        Sleep(speed); //speed increase

        // Move obstacle down
        step++;

        // Reset when reaches bottom
        if (step > 10) {
            
            score++;

            if(speed > 40)
                speed-=3;
            step = 0;
            obstaclePos = rand() % 3; // new lane
        }
    }

    return 0;
}
