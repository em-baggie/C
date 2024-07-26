#include <stdio.h>

int main(void) {
    int hours, mins;

    printf("Enter a 24-hour time in the format hh:mm -  ");
    scanf("%d:%d", &hours, &mins);
    switch (hours) {
        case 13: hours = 1;
    }
}