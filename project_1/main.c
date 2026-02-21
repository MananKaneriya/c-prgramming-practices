/*
We will write a program that generates a random number and asks the player to guess it.
If the player’s guess is higher than the actual number, the program displays “Lower number please”.
Similarly, if the user’s guess is too low, the program prints “Higher number please”.
When the user guesses the correct number, the program displays the number ofguesses the player used to arrive at the number.
Hint: Use loop & use a random number generator
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(0));          // seed using current time
    int random = (rand() % 100) + 1;   // random number between 1 and 100
    int no_of_guesses = 0;
    int guessed_no;

    do{
        printf("Guess a Number:");
        scanf("%d", &guessed_no);
        if(guessed_no > random){
            printf("Lower number please!\n ");
            
        
        }
        else if(guessed_no < random){
            printf("Higher number please!\n");
            
        }
        no_of_guesses++;

    } while(guessed_no != random);

    printf("You guessed the number in %d guesses\n", no_of_guesses);
    
    return 0;
}
