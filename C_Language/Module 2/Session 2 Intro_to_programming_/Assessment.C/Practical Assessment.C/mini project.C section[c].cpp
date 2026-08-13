#include <stdio.h>
struct StudyLog {
    char subject[40];
    float hours[7];
};
void weeklyReport(struct StudyLog logs[], int n) {
    int i, j;
    float total;

    printf("\n--- Weekly Report ---\n");

    for(i=0;i<n;i++){
        total = 0;

        for (j=0;j<7;j++){
            total = total + logs[i].hours[j];
        }
        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", total / 7);

        printf("Progress:\n");
        for(j=0;j<7;j++){
            int k;
            printf("Day %d: ", j + 1);

            for (k=0;k<(int)logs[i].hours[j];k++){
                printf("*");
            }
            printf("\n");
        }
    }
}

void saveData(struct StudyLog logs[], int n) {
    FILE *file;
    int i, j;

    file = fopen("productivity_log.txt", "w");

    for (i=0;i<n;i++){
        fprintf(file, "%s", logs[i].subject);

        for(j=0;j<7;j++){
            fprintf(file, ",%.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }
    fclose(file);
    printf("\nData saved successfully!\n");
}
int main(){
    struct StudyLog logs[3]={
        {"C Programming", {0,0,0,0,0,0,0}},
        {"C++", {0,0,0,0,0,0,0}},
        {"Web Development", {0,0,0,0,0,0,0}}
    };
    int choice, day, i;
    do{
        printf("\n--- Student Productivity Tracker ---\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice==1){
            printf("Enter day number (1-7): ");
            scanf("%d", &day);

            for (i = 0;i<3;i++){
                printf("Hours for %s: ", logs[i].subject);
                scanf("%f", &logs[i].hours[day - 1]);
            }
        }
        else if (choice == 2){
            weeklyReport(logs, 3);
        }
        else if (choice == 3){
            saveData(logs, 3);
        }
        else {
            printf("Invalid choice!\n");
        }
    } while (choice != 3);
}
