#include <stdio.h>
#include <string.h>

int main() {
   
    char item[50]= " ";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("what item would u like to buy ? ");
    fgets(item, sizeof(item),stdin);
    item[strlen(item)- 1] = '\0';

    printf("what is the price for each ? :");
    scanf("%f", &price);

    printf("how many do you want ? :");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s \n", quantity, item);
    printf("the total is: %c%.2f", total);

    return 0;
}
