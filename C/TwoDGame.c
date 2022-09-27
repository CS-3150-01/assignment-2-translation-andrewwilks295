#include <stdio.h>
#include <stdlib.h>


int main(int args, char* argv[]) {

    char map[20][100] = { 0 };
    map[2][2] = "P";
    int proceed = 0; //true
    int argsCheck = 1; //false

    int argsRunIndex = 0;

    const char* directions[4] = {"North", "East", "South", "West"};
    int directionX[4] = {0, -1, 0, 1};
    int directionY[4] = {1, 0, -1, 0};

    int currentDirection = 0;

    int currentPosition[] = {2,2};

    if(strln(args) > 0) {
        argsCheck = 0; //true
    }
    while (proceed) {
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 100; j++) {
                if (map[i][j] == NULL) {
                    printf(" ");
                } else {
                    prinf(map[i][j]);
                }
            }
            printf("\n"); //Will print new line after each row
        }
        printf("Please traverse the world and explore using these commands: \n  W - Walk Forward\n  A - Turn Left\n  D - Turn Right\n  E - Check Direction\n  Q - Quit the Game");

        char input;

        if (!argsCheck) {
            scanf("%s", input); 
        } else {
            if (argsRunIndex == strlen(args)) {
                argsCheck = 1; //false
                *input = *"e";
            } else {
                *input = *argv[argsRunIndex];
                argsRunIndex++;
            }

        
        }
        switch(input){
                case 'w':
                    map[currentPosition[1]][currentPosition[0]] = "#";
                    //saves the trail of where you have been
                    if(!((currentPosition[0] - directionX[currentDirection] < 0) || (currentPosition[0] - directionX[currentDirection] > 100)||(currentPosition[1] - directionY[currentDirection] < 0) || (currentPosition[1] - directionY[currentDirection] > 20))){
                        //checks if you're bumping into the edge
                        currentPosition[0] = currentPosition[0] - directionX[currentDirection];
                        currentPosition[1] = currentPosition[1] - directionY[currentDirection];
                       
                    }

                    map[currentPosition[1]][currentPosition[0]] = "P";
                    //puts your player icon down
                    break;
                case 'a':
                    currentDirection--;
                    //moves your index up or down the 3 arrays listed above
                    if(currentDirection < 0){
                        currentDirection = 3;
                    }
                    break;
                case 'd':
                    currentDirection++;
                    //moves your index up or down the 3 arrays listed above

                    if(currentDirection > 3){
                        currentDirection = 0;
                    }
                    break;
                case 'e':
                    printf("You are facing in the %i ward direction!", directions[currentDirection]);
                    break;
                case 'q':

                    proceed = 0; //true
                    break;
                
                default:
                    printf("You must enter one of the commands!");

            }
    }

    return 0;
}