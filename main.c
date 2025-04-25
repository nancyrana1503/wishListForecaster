#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ITEM_LIMIT 10
#define MAX_PRIORITY 3
#define MIN_PRIORITY 1
int main(void) {
    const double netmonthlyMin = 500.00, netmonthlyMax = 400000.00, itemcostMin = 100.00;
    double itemCost[] = { 39030.15, 1200000.00, 350500.25 };
    int itemPriority[] = { 1,3,2 };
    char itemFinance[] = { 'n','y','n' };
    int valid, wishlistItem, priority, i;
    int item[] = { 1,2,3 };
    char financingOptions;
    float netIncome = 0;
    double cost1;
    double cost2;
    double cost3;
    double sum;

    printf("+--------------------------+\n+   Wish List Forecaster   |\n+--------------------------+\n\n");


    //  ENTERING THE NET INCOME  

    do {
        valid = 1;
        printf("Enter your monthly NET income: $");
        scanf(" %f", &netIncome);

        if (netIncome < netmonthlyMin)
        {
            printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n\n", netmonthlyMin);
            valid = 0;
        }
        if (netIncome > netmonthlyMax)
        {
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n\n", netmonthlyMax);
            valid = 0;
        }
    } while (valid != 1);
    printf("\n");



    //  ENTERING THE WISH LIST ITEMS  

    do {
        valid = 1;
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wishlistItem);
        if (wishlistItem < 1 || wishlistItem>10)
        {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
            valid = 0;
        }
        else {
            valid = 1;
        }
        printf("\n");
    } while (valid == 0);



    //  ENTERING THE ITEM 1 DETAILS

    printf("Item-1 Details:\n");
    printf("   Item cost: $");
    scanf("%lf", &cost1);




    //  ENTERING THE PRIORITY 
    // FOR ITEM 1

    do {
        valid = 1;

        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf("%d", &priority);

        if (priority > MAX_PRIORITY || priority < MIN_PRIORITY) {
            printf("      ERROR: Value must be between 1 and 3\n");
            valid = 0;
        }
    } while (valid == 0);




    //  ENTERING WHETHER THE ITEMS HAVE FINANCING OPTIONS OR NOT 
    // FOR ITEM 1
    do {

        printf("   Does this item have financing options? [y/n]: ");
        scanf(" %c", &financingOptions);
        if (financingOptions != 'y' && financingOptions != 'n')
        {
            printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
        }
    } while (financingOptions != 'y' && financingOptions != 'n');




    //  ENTERING THE ITEM 2 DETAILS

    printf("\nItem-2 Details:");
    do {
        printf("\n   Item cost: $");
        scanf("%lf", &cost2);
        if (cost2 < itemcostMin) {
            printf("      ERROR: Cost must be at least $100.00");
        }
    } while (cost2 < itemcostMin);




    //  ENTERING THE PRIORITY 
    // FOR ITEM 2

    do {
        valid = 1;

        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf("%d", &priority);

        if (priority > MAX_PRIORITY || priority < MIN_PRIORITY) {
            printf("   ERROR: Value must be between 1 and 3\n");
            valid = 0;
        }
    } while (valid == 0);



    //  ENTERING WHETHER THE ITEMS HAVE FINANCING OPTIONS OR NOT 
    // FOR ITEM 2

    do {

        printf("   Does this item have financing options? [y/n]: ");
        scanf(" %c", &financingOptions);
        if (financingOptions != 'y' && financingOptions != 'n')
        {
            printf("   ERROR: Must be a lowercase 'y' or 'n'\n");
        }
    } while (financingOptions != 'y' && financingOptions != 'n');




    //  ENTERING THE ITEM 3 DETAILS

    printf("\nItem-3 Details:\n");
    printf("   Item cost: $");
    scanf("%lf", &cost3);



    //  ENTERING THE PRIORITY 
    // FOR ITEM 3

    do {
        valid = 1;

        printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
        scanf("%d", &priority);

        if (priority > MAX_PRIORITY || priority < MIN_PRIORITY) {
            printf("ERROR: Value must be between 1 and 3\n");
            valid = 0;
        }
    } while (valid == 0);



    //  ENTERING WHETHER THE ITEMS HAVE FINANCING OPTIONS OR NOT 
    // FOR ITEM 3

    do {

        printf("   Does this item have financing options? [y/n]: ");
        scanf(" %c", &financingOptions);
        if (financingOptions != 'y' && financingOptions != 'n')
        {
            printf("ERROR: Must be a lowercase 'y' or 'n'\n");
        }
    } while (financingOptions != 'y' && financingOptions != 'n');


    // dipslay of the item list table

    printf("\nItem Priority Financed        Cost\n"); printf("---- -------- -------- -----------\n");

    for (i = 0; i <= 2; i++) {
        printf("% 3d  % 5d    %5c    % 11.2lf\n", item[i], itemPriority[i], itemFinance[i], itemCost[i]);
    }




    // diplaying the total cost

    sum = cost1 + cost2 + cost3;

    printf("---- -------- -------- -----------\n");
    printf("                      $%11.2lf\n\n", sum);
    printf("Best of luck in all your future endeavours!\n\n");

    return 0;
}