#include <stdio.h>
main(){
    int minutes[7];
    int i;
    int choice;

    int total;
    int highest;
    float average;

    FILE *file;

    do
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log listening minutes\n");
        printf("2. View weekly report\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("\nEnter music listening minutes for 7 days:\n");

                for(i = 0; i < 7; i++)
                {
                    printf("Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }

                file = fopen("music_log.txt", "w");

                if(file == NULL)
                {
                    printf("Error opening file!\n");
                    break;
                }

                for(i = 0; i < 7; i++)
                {
                    fprintf(file, "%d\n", minutes[i]);
                }

                fclose(file);

                printf("\nListening data saved successfully!\n");
                break;


            case 2:

                /* Open file in read mode */
                file = fopen("music_log.txt", "r");

                if(file == NULL)
                {
                    printf("\nNo music data found!\n");
                    break;
                }
                total = 0;
                highest = 0;

                /* Read data from file */
                for(i = 0; i < 7; i++)
                {
                    fscanf(file, "%d", &minutes[i]);

                    total = total + minutes[i];

                    if(minutes[i] > highest)
                    {
                        highest = minutes[i];
                    }
                }

                fclose(file);
                average = total / 7.0;
                printf("\n===== Weekly Music Report =====\n");
                printf("Total listening minutes   : %d\n", total);
                printf("Average listening minutes : %.2f\n", average);
                printf("Highest listening minutes : %d\n", highest);
                break;

            case 3:
                printf("\nThank you for using Music Listening Logger!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter 1, 2 or 3.\n");
        }
    } while(choice != 3);
}

