#include <stdio.h>
#include <time.h>
#include <string.h>
#include "typing_functions.h"
#include "typing_text.h"


int main() {
    char originalText[500];
    char userInput[500];
    time_t startTime, endTime;
    double elapsedTime;
    char userName[50];
    int typingMode;

    printf("Enter your name: ");
    fgets(userName, sizeof(userName), stdin);

    printf("Select typing mode:\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &typingMode);

   if (typingMode == 1) {
    strcpy(originalText, easyText);
         } 
		 else if (typingMode == 2) {
    strcpy(originalText, mediumText);
        } 
		else {
    printf("Invalid typing mode choice. Exiting program.\n");
    return 1;
    }   

    displayInstructions(userName, originalText);

    while (getchar() != '\n');

    time(&startTime);

    fgets(userInput, sizeof(userInput), stdin);

    time(&endTime);

    elapsedTime = difftime(endTime, startTime) / 60.0;

    double correctChars = 0;
    int i;
    for ( i = 0; i < strlen(originalText) && i < strlen(userInput); i++) {
        if (originalText[i] == userInput[i]) {
            correctChars++;
        }
    }

    int wordsTyped = strlen(userInput) / 10;
    double wpm = wordsTyped / elapsedTime;

    printf("\nTime taken: %.2f minutes\n", elapsedTime);
    printf("Accuracy: %.2f%%\n", correctChars / strlen(originalText) * 100);
    printf("Typing Speed: %.2f WPM\n", wpm);

    saveHighScore(userName, wpm);
    displayHighScores();

    return 0;
}

