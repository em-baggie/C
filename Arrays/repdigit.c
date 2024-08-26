// prints a table showing number of occurences for each digit in an entered number

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Digit:      ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    printf("Occurences: ");
    while (n > 0) {
        digit = n % 10;
        digit_count[digit] += 1;
        n /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_count[i]);
    }
    printf("\n");

    return 0;
}