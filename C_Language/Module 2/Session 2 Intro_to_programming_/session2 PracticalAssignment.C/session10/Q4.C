#include <stdio.h>
#include <string.h>

 main()
{
    char name[100];
    char username[6];
    char firstFive[6];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    if (strlen(name) <= 5)
    {
        strcpy(username, name);
    }
    else
    {
        strncpy(firstFive, name, 5);
        firstFive[5] = '\0';
        strcpy(username, firstFive);
    }
    printf("Generated Username: %s\n", username);

}
