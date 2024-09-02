/* Modify Programming Project 7 so that it prompts for five quiz,
grades for each of five stu- dents.
then computes the total score and average score for each student,
and the average score. high score, and low score for each quiz.
*/

#include <stdio.h>
#define NUM 5

int main(void) {
    int grid[NUM][NUM] = {0};
    int totalr[NUM] = {0};
    int totalc[NUM] = {0};
    int totalrr = 0;
    int total_quiz[NUM] = {0};
    float avg_quiz[NUM] = {0.0};
    int hs[NUM] = {-1};
    int ls[NUM] = {100};
    
    for (int i = 0; i < NUM; i++) {
        printf("Enter score for student %d: ", (i + 1));
        for (int j = 0; j < 5; j++) {
            scanf("%d", &grid[i][j]);
            totalr[i] += grid[i][j];
            totalc[j] += grid[i][j];
            }
        }

    for (int i = 0; i < NUM; i++) {
        for (int j = 0; j < 5; j++) {
            total_quiz[i] += grid[i][j];
        }
    }

    for (int i = 0; i < NUM; i++) {
        avg_quiz[i] = (float) total_quiz[i] / NUM;
    }

    for (int i = 0; i < NUM; i++) {
        for (int j = 0; j < NUM; j++) {
            if (grid[i][j] > hs[i]) {
                hs[i] = grid[i][j];
            }
        }
    }

    for (int i = 0; i < NUM; i++) {
        for (int j = 0; j < NUM; j++) {
            if (grid[i][j] < ls[i]) {
                ls[i] = grid[i][j];
            }
        }
    }

    printf("Total score for each student: %d %d %d %d %d\n", totalc[0], totalc[1], totalc[2], totalc[3], totalc[4]);
    printf("Average score for each student: %.2f %.2f %.2f %.2f %.2f\n", (float) totalc[0]/NUM, (float) totalc[1]/NUM, (float) totalc[2]/NUM, (float) totalc[3]/NUM, (float) totalc[4]/NUM);
    printf("Average score for each quiz: %.2f %.2f %.2f %.2f %.2f\n", avg_quiz[0], avg_quiz[1], avg_quiz[2], avg_quiz[3], avg_quiz[4]);
    printf("High score for each quiz: %d %d %d %d %d\n", hs[0], hs[1], hs[2], hs[3], hs[4]);
    printf("Low score for each quiz: %d %d %d %d %d\n", ls[0], ls[1], ls[2], ls[3], ls[4]);

}