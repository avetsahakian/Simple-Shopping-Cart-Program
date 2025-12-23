#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    char item[45] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you prefer to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like to have it?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("Your total is %c%.2f" , currency, total);

    return 0;
}
