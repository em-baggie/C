// prints name in format first name, initial.

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Enter a first name and last name: ");
    while ((ch = getchar()) != ' ') {
            printf("%c", ch);
    }
    
    if ((ch = getchar()) != ' ') {
        printf(", %c.\n", ch);
    }

    return 0;
}
