#include <stdio.h>

int main(void) {
    const char *questions[] = {
        "Which type stores a whole number?\n1. int\n2. float\n3. char",
        "Which symbol ends most C statements?\n1. :\n2. ;\n3. ,",
        "What is the first array index in C?\n1. 1\n2. -1\n3. 0",
        "Which loop runs its body at least once?\n1. for\n2. while\n3. do-while",
        "Which function prints text?\n1. printf\n2. scanf\n3. strlen"
    };
    const int answers[] = {1, 2, 3, 3, 1};
    int score = 0;

    puts("C basics quiz - choose 1, 2 or 3.");
    for (int i = 0; i < 5; i++) {
        int choice;
        printf("\nQuestion %d\n%s\nAnswer: ", i + 1, questions[i]);
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 3) {
            puts("Please run again and enter a number from 1 to 3.");
            return 1;
        }
        if (choice == answers[i]) {
            puts("Correct!");
            score++;
        } else {
            printf("Correct option: %d\n", answers[i]);
        }
    }
    printf("\nScore: %d/5\n", score);
    return 0;
}
