#include <stdio.h>
#include <string.h>
#include <ctype.h>
void getUserInitials(char fullName[], char initials[]){
    int i = 0;
    int j = 0;
    while (fullName[i] != '\0'){
        if (i == 0 || fullName[i - 1] == ' '){
            initials[j] = toupper(fullName[i]);
            j++;
        }
        i++;
    }
    initials[j] = '\0';
}

int main()
{
    char name[50];
    char initials[10];
    printf("Enter your favorite cricketer name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    getUserInitials(name, initials);
    printf("Initials: %s\n", initials);
}

