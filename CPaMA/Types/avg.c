// takes first and last name and formats as first name, initial.
// ignores whitespace before and after each name

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    float avg, length, count;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
        if (ch != ' ') {
            length ++;
        } else {
            count ++;
        }

    avg = length / count;
    
    printf("The average word length is: %f", avg);

    return 0;
}