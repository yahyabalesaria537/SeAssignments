#include <stdio.h>
struct Expense {
    char category[30];
    float amount;
};
main(){
    struct Expense exp[10];
    int count = 0;
    int choice;
    float total;
    FILE *fp;
    int i; 
    do {
        printf("\n=== PERSONAL EXPENSE LOGGER ===\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (count >= 10) {
                    printf("\nLimit reached! Cannot add more than 10 expenses.\n");
                } else {
                    printf("\nEnter Category: ");
                    scanf("%s", exp[count].category);
                    printf("Enter Amount: ");
                    scanf("%f", &exp[count].amount);
                    count++;
                    printf("Expense added successfully!\n");
                }
                break;

            case 2:
                if (count == 0) {
                    printf("\nNo expenses logged yet!\n");
                } else {
                    total = 0;
                    printf("\n-----------------------------------\n");
                    printf("Category\t\tAmount\n");
                    printf("-----------------------------------\n");
                    for (i = 0; i < count; i++) {
                        printf("%s\t\t%.2f\n", exp[i].category, exp[i].amount);
                        total += exp[i].amount;
                    }
                    
                    printf("-----------------------------------\n");
                    printf("Total Expense:\t\t%.2f\n", total);
                }
                break;

            case 3:
                fp = fopen("expenses.txt", "w");
                if (fp == NULL) {
                    printf("\nError opening file!\n");
                } else {
                    for (i = 0; i < count; i++) {
                        fprintf(fp, "%s,%.2f\n", exp[i].category, exp[i].amount);
                    }
                    fclose(fp);
                    printf("\nData saved to expenses.txt successfully. Exiting...\n");
                }
                break;

            default:
                printf("\nInvalid choice! Please select 1, 2, or 3.\n");
        }
    } while (choice != 3);
}
