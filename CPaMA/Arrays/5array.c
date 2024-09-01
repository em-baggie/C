#include <stdio.h>

int main(void) {
    int row[5] = {0};
    int rowt[5] = {0};
    int colt[5] = {0};
    char ch;
    int totalr;
    int totalc;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; i < 5; j++) {
            printf("Enter row %d: ", i + 1);
            while ((ch = getchar()) != '\n' && i < 5) {
            row[j] = (int) ch;
            printf("%d", row[j]);
            rowt[i] += row[j];
            j++;
            colt[j] += row[j];
            }
        }
        printf("\n");
    }
    printf("Row totals: %d %d %d %d %d", rowt[0], rowt[1], rowt[2], rowt[3], rowt[4]);
    printf("Column totals: %d %d %d %d %d", colt[0], colt[1], colt[2], colt[3], colt[4]);
}