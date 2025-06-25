
#include <string.h>
void searchContact()
{
    FILE *fp;
    struct contact c;
    char search[50];
    int found = 0;

    fp = fopen("contacts.txt", "r");
    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("Enter name or phone to search: ");
    scanf("%s", search);

    while (fscanf(fp, "%s %s %s %s %s", c.name, c.ph, c.mail, c.add, c.dob) == 5)
    {
        if (strcmp(c.name, search) == 0 || strcmp(c.ph, search) == 0)
        {
            printf("\nName     : %s\n", c.name);
            printf("Phone    : %s\n", c.ph);
            printf("Email    : %s\n", c.mail);
            printf("Address  : %s\n", c.add);
            printf("Birthday : %s\n", c.dob);
            printf("--------------------------\n");
            found = 1;
        }
    }

    fclose(fp);

    if (found==0) 
    {
        printf("No contact found with that name or phone number.\n");
    }
}