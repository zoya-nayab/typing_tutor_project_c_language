#ifndef Untitled2_H
#define Untitled2_H
void displayInstructions(char *name, char *text) {
    printf("\nWelcome to the Typing Tutor, %s!\n", name);
    printf("Type the following text as fast as you can:\n");
    printf("\n%s\n", text);
}

void saveHighScore(char *name, double wpm) {
    FILE *file = fopen("high_scores.txt", "a");
    if (file == NULL) {
        printf("Error opening file for saving high scores.\n");
        return;
    }

    fprintf(file, "%s %.2f WPM\n", name, wpm);
    fclose(file);
}

void displayHighScores() {
    FILE *file = fopen("high_scores.txt", "r");
    if (file == NULL) {
        printf("No high scores available.\n");
        return;
    }

    printf("\nHigh Scores:\n");
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

#endif
