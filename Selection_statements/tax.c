#include <stdio.h>

int main(void) {
    float income, tax;

    if (income < 750.00f) {
        tax = 0.01 * income;
    } else if (income < 2250.00f) {
        
    }
    } else if (income < ) {
        tax = 37.50f + 0.03 * (income - 2250.00f);
    } else if (income < 3750.00f) {
        tax = 37.50f + 0.03 * (income - 2250.00f);
    }


    printf("%.2f", tax);
}