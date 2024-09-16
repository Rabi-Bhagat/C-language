#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 101;

    // Variable to store the number of guesses and the guessed number
    int no_of_guesses = 0, guessed;

    do {
        printf("Enter your guess (between 0 and 100): ");
        scanf("%d", &guessed);

        if (guessed > randomNumber) {
            printf("Please enter a lower number than %d.\n", guessed);
        } else if (guessed < randomNumber) {
            printf("Please enter a higher number than %d.\n", guessed);
        } else {
            printf("!! Congrats !! You guessed the correct number!\n");
            printf("Your prize is 7 crores!\n");
        }

        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("Congratulations! You guessed the number in %d attempts. You are the winner!\n", no_of_guesses);

    return 0;
}
