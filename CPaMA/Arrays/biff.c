#include <stdio.h>
#define MAX 20

int main(void) {
    char sentence[MAX] = {0};
    char ch;
    int i = 0;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
            sentence[i] = ch;
            i++;
        }
    }
    printf("\nIn B1FF-speak: ");

    for (int i = 0; i < MAX; i++) {
        switch (sentence[i]) {
            case 'A':
                printf("4");
                break;
            case 'B':
                printf("8");
                break;
            case 'E':
                printf("3");
                break;
            case 'I':
                printf("1");
                break;
            case 'O':
                printf("0");
                break;
            case 'S':
                printf("5");
                break;
            default:
                printf("%c", sentence[i]);
                break;
        }
    
    }
    printf("\n");
}