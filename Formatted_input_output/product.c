#include <stdio.h>

int main(void) {
    int item, d, m, y;
    float price;
    printf("Enter an item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &d, &m , &y);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t£%.2f\t%d/%d/%d\n", item, price, d, m , y);
}