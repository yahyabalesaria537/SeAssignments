#include <stdio.h>
struct Student {
    char name[50];
    int rollno;
    float marks;
    char grade;
};
void assignGrade(struct Student *std){
    if (std->marks >= 90)
        std->grade = 'A';
    else if (std->marks >= 75)
        std->grade = 'B';
    else if (std->marks >= 60)
        std->grade = 'C';
    else if (std->marks >= 40)
        std->grade = 'D';
    else
        std->grade = 'F';
}
void printTopper(struct Student std[], int n) {
    int maxIndex = 0;
    int i;

    for (i = 1; i < n; i++){
        if (std[i].marks > std[maxIndex].marks) {
            maxIndex = i;
        }
    }
    printf("\n*** TOPPER DETAILS ***\n");
    printf("Name: %s\n", std[maxIndex].name);
    printf("Marks: %.2f\n", std[maxIndex].marks);
}
main(){
    struct Student std[3];
    int i;

    for (i = 0; i < 3; i++){
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", std[i].name);
        printf("Roll No: ");
        scanf("%d", &std[i].rollno);
        printf("Marks: ");
        scanf("%f", &std[i].marks);
        assignGrade(&std[i]);
    }
    printf("\nName\tRoll No\tMarks\tGrade\n");
    printf("----------------------------------\n");
    for (i = 0; i < 3; i++) {
        printf("%s\t%d\t%.2f\t%c\n",
               std[i].name,
               std[i].rollno,
               std[i].marks,
               std[i].grade);
    }
    printTopper(std, 3);
}
