#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // generate random number
    time_t t;
    srand((unsigned) time(&t));
    int randomNumber = rand() % 21;
    
    
	printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess\n");
    
    int tries = 5;
    
    // loop
    while (tries != 0) {
        printf("\nYou have %d tries left\n", tries);
        printf("Enter a guess: ");
        int numberEntered;
        scanf("%d", &numberEntered);
        if (numberEntered == randomNumber) {
            printf("\nCongratulations. You guessed it!\n");
            break;
        } else {
            if (numberEntered > randomNumber) {
                printf("Sorry, %d is wrong. My number is less than that\n", numberEntered);
            } else {
                printf("Sorry, %d is wrong. My number is higher than that\n", numberEntered);
            }
            
            --tries;
        }
    }
    
    printf("\nEnd of game");
    
	return 0;
}
