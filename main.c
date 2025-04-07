#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int isRunning = 1;
    int randomNumber;
    int userInput;
    int timesTried;
    while (isRunning == 1) {
        timesTried = 0;
        randomNumber = rand() % 100 + 1;
        printf("Please enter the number between 1 and 100!\n");
        while(1){
            printf("Tries made: %d\n", timesTried);
            scanf("%d", &userInput); // can make a bug if enter not 2, but enter 2' p.s. not skilled to fix(or not motivated, need to go for sleep)
            timesTried++;
            if(userInput == randomNumber){
                printf("Congratulations! you've chosen the correct one: %d ! You've made %d tries.\n", randomNumber, timesTried);
                break;
            }else{
                if(userInput > randomNumber){
                    printf("The number is lesser than yours!");
                }else{
                    printf("The number is greater than yours!");
                }
            }
        }

        char choice;
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice);
        if(choice != 'y' && choice != 'Y'){
            isRunning = 0; //The end of the game.
        }
    }
    return 0;
}
