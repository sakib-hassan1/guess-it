#include <stdio.h>
#define MAX_GUESSES 5
#define RANGE_LOW 1
#define RANGE_HIGH 20

int main() {
    int answer, guess, numGuesses = 0;
    srand(time(0)); // seed the random number generator
    answer = (rand() % RANGE_HIGH) + RANGE_LOW; // generate a random number between RANGE_LOW and RANGE_HIGH

    printf("I'm thinking of a number between %d and %d. Can you guess it?\n", RANGE_LOW, RANGE_HIGH);

    while (numGuesses < MAX_GUESSES) {
        printf("Guess #%d: ", numGuesses+1);
        scanf("%d", &guess);

        if (guess == answer) {
            printf("Congratulations! You guessed the number in %d guesses.\n", numGuesses+1);
            return 0; // exit the program
        } else {
            printf("Sorry, that's not the number I'm thinking of.\n");
            if (guess < answer) {
                printf("Hint: the number I'm thinking of is higher.\n");
            } else {
                printf("Hint: the number I'm thinking of is lower.\n");
            }
            numGuesses++;
        }
    }

    printf("Sorry, you didn't guess the number. The number I was thinking of was %d.\n", answer);
    return 0;
}
