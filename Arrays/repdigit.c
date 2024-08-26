#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool digit_seen[10] = {false};
    bool digit_printed[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    printf("Repeated digit(s): ");

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            if (!(digit_printed[digit])) {
                printf("%d ", digit);
                digit_printed[digit] = true;
            }
        } else {
            digit_seen[digit] = true;
        }
        n /= 10;
    }
    return 0;
}