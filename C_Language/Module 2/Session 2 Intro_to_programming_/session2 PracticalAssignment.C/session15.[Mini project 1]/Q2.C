#include<stdio.h>
int main(){
    int minutes[7];
    int i;
    int choice;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log listening minutes\n");
        printf("2. View weekly summary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter music listening minutes for 7 days:\n");
                for(i = 0; i < 7; i++){
                    printf("Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }
                printf("\nMusic listening data saved in array.\n");
                break;

            case 2:
                printf("\n===== Weekly Summary =====\n");
                for(i = 0; i < 7; i++){
                    printf("Day %d: %d minutes\n",
                           i + 1, minutes[i]);
                }
                break;

            case 3:
                printf("\nThank you for using Music Listening Logger!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please enter 1, 2 or 3.\n");
        }
    } while(choice != 3);

}


