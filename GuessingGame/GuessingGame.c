#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int secretNumber = 0;
    int guess = 0;
    int numberOfGuesses = 0;

    int limit = 100;
    int menuChoice = 0;

    time_t startTime;
    time_t endTime;

    int delayCorrection = 0;

    srand(time(NULL));
    secretNumber = (rand() % 100) + 1;

    while(1){
        system("cls");
        delayCorrection = 0;

        printf("\n============================\n");
        printf("        Main Menu           \n");
        printf("============================\n");
        printf("1. Easy mode        (1-10)\n");
        printf("2. SUPER EASY MODE  (1-10)\n");
        printf("3. Normal mode      (1-50)\n");
        printf("4. SUPER NORMAL MODE(1-50)\n");
        printf("5. Hard mode        (1-90)\n");
        printf("6. SUPERHARD MODE   (1-100)\n");
        printf("7. Exit\n");
        printf("============================\n");
        printf("Pick your mode: ");
        scanf("%d", &menuChoice);

        if(menuChoice == 7){
            printf("\nBYE BYE!\n");
            return 0;
        }

        if     (menuChoice == 1) limit = 10;
        else if(menuChoice == 2) limit = 10;
        else if(menuChoice == 3) limit = 50;
        else if(menuChoice == 4) limit = 50;
        else if(menuChoice == 5) limit = 90;
        else if(menuChoice == 6) limit = 100;
        else{
            printf("Wrong input but lets start with normal mode instead!\n");
            limit = 50;
        }

        secretNumber = (rand() % limit) + 1;
        numberOfGuesses = 0;

        system("cls");
        printf("\nWhat...\n");
        printf("is...\n");
        printf("the..\n");
        printf("SECRET NR??\n");
        printf("\nGET READY!!\n");
        printf("3...\n");
        printf("2...\n");
        printf("1...\n");

        system("cls");
        printf("\n*** GAME STARTED ***\n");
        printf("Range: 1 to %d\n", limit);
        printf("The SUPER MODE has limited guesses\n");
        startTime = time(NULL);

        do{
            if( (menuChoice == 2 && numberOfGuesses == 3) ||
                (menuChoice == 4 && numberOfGuesses == 5) ||
                (menuChoice == 6 && numberOfGuesses == 8))
            {
                printf("\n>>> OUT OF GUESSES! <<<\n");
                break;
            }

            printf("\nEnter your guess: ");
            scanf("%d", &guess);
            numberOfGuesses++;
            printf("Checking...\n");
            delayCorrection++;

            if(guess > secretNumber){
                printf("TOO HIGH!!!\n");
            }
            else if(guess < secretNumber){
                printf("TOO LOW\n");
            }

        } while(guess != secretNumber);

        endTime = time(NULL);
        double totalTime = difftime(endTime, startTime);
        double finalTime = totalTime - delayCorrection;

        if(guess == secretNumber){
            if(finalTime < 20 && numberOfGuesses <= 3){
                printf("  ***  LEGENDARY! ***\n");
                printf("  YOU ARE A SUPER PRO!\n");
            }
            else if(finalTime < 20 && numberOfGuesses <= 5){
                printf("     WOW YOU ARE PRO!\n");
            }
            else{
                printf("         CONGRATZ!\n");
            }
            printf("----------------------------\n");
            printf("GUESSES: %d\n", numberOfGuesses);
            printf("TIME:    %.0f %s\n", finalTime, (finalTime == 1) ? "SECOND" : "SECONDS");
            printf("============================\n");
        }
        else if((menuChoice == 2 && numberOfGuesses == 3) ||
                (menuChoice == 4 && numberOfGuesses == 5) ||
                (menuChoice == 6 && numberOfGuesses == 8))
        {
            printf("       GAME OVER!\n");
            printf("  I WIN AND YOU LOSE! XD\n");
            printf("----------------------------\n");
            printf("THE NUMBER WAS %d\n", secretNumber);
            printf("YOU WASTED: %.0f %s\n", finalTime, (finalTime == 1) ? "SECOND" : "SECONDS");
            printf("============================\n");
        }
        else{
            printf("       WOW SO BAD!\n");
            printf("  YOU BROKE THE LOOP XDD\n");
            printf("============================\n");
        }

        printf("\nPRESS ENTER TO RETURN TO MAIN MENU!\n");
        while(getchar() != '\n');
        getchar();
    }
    return 0;
}
