#include <stdio.h>
int main(){
    int minutes[7];
    int i;

    printf("Enter music listening minutes for 7 days:\n");
    for(i = 0; i < 7; i++)
    {
        printf("Day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }
    printf("\nMusic Listening Data:\n");
    for(i = 0; i < 7; i++)
    {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }
}
