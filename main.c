#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


int main(){
    srand(time(NULL));
    bool isRunning = true;
    int randForVariety;
    int randomNumber;
    int userInput;
    int timesTried = 0;
    randomNumber = rand() % 20 + 1;
    printf("Please enter the number between 1 and 20!\n");
    while (isRunning) {
        printf("Tries made: %d\n", timesTried);
        scanf("%d", &userInput);
        if(userInput == randomNumber){
            printf("Congratulations! you've chosen the correct one: %d ! You've made %d tries.\n", randomNumber, timesTried);
            isRunning = false;
        }else{
            randForVariety = rand() % 10 + 1;
            switch (randForVariety) {
                case 1:
                    printf("Maybe next time?\n");
                    break;
                case 2:
                    printf("Close, but not quite!\n");
                    break;
                case 3:
                    printf("Try again!\n");
                    break;
                case 4:
                    printf("Not this time!\n");
                    break;
                case 5:
                    printf("Keep guessing!\n");
                    break;
                case 6:
                    printf("You're getting warmer!\n");
                    break;
                case 7:
                    printf("Almost there!\n");
                    break;
                case 8:
                    printf("Better luck next round!\n");
                    break;
                case 9:
                    printf("Just give up man, that's not yours!\n");
                    break;
                case 10:
                    printf("That's not it, but you can do it(maybe)!\n");
                    break;
                default:
                    printf("Something went wrong, but u should do ur best, cuz uvnt chosen the correct one!\n");
                    break;
            }
            timesTried += 1;
        }
    }
    
}
