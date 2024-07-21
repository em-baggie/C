#include <stdio.h>

int main() {
    int i, j;

    float x;

    scanf("%d%f%d", &i, &x, &j);

    printf("%d\n", i);
    printf("%f\n", x);
    printf("%d\n", j);

    return 0;
}

// if input 10.3 5 6
// %d: reads 10 as integer assigns it to i, .5 left in buffer
// .5 5 6 in buffer
// %f reads 0.5
// %d reads 5
// 6 left in buffer
// so need to be careful!!!