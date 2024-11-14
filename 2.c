#include <stdio.h>

int main() {
    int score;
    printf("Enter the exam score: ");
    scanf("%d", &score);

    if (score >= 90)
        printf("Grade 1: Excellent work!\n");
    else if (score >= 80)
        printf("Grade 2: Good job!\n");
    else if (score >= 70)
        printf("Grade 3: You passed!\n");
    else if (score >= 60)
        printf("Grade 4: You need to study harder.\n");
    else
        printf("Grade 5: Better luck next time.\n");

    return 0;
}
