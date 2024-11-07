#include <stdio.h>

int main() {
    int score;
    printf("Enter the exam score: ");
    scanf("%d", &score);

    if (score >= 90)
        printf("Grade A: Excellent work!\n");
    else if (score >= 80)
        printf("Grade B: Good job!\n");
    else if (score >= 70)
        printf("Grade C: You passed!\n");
    else if (score >= 60)
        printf("Grade D: You need to study harder.\n");
    else
        printf("Grade F: Better luck next time.\n");

    return 0;
}