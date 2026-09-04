#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int difficulty;
    int range;

    printf("What difficulty? (1-5): ");
    scanf("%d", &difficulty);

    switch (difficulty) {
        case 1:
            range = 10;
            break;
        case 2:
            range = 100;
            break;
        case 3:
            range = 1000;
            break;
        case 4:
            range = 10000;
            break;
        case 5:
            range = 100000;
            break;
    }

    int guess = 0;
    int guesses = 0;
    int again = 0;
    int num = rand() % range + 1;
    
    while (guess != num) {
        printf("Enter a number 1-%d: ", range);
        scanf("%d", &guess);

        if (guess > num) {
            printf("Too high!\n");

        } else if (guess < num) {
            printf("Too low!\n");

        } else {
            printf("Correct!\n");
            printf("Amount of Guesses: %d\n", guesses);

            return 0;
        }

        guesses++;
        printf("Current Guesses: %d\n\n", guesses);
    }

    return 0;
}