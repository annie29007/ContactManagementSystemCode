void updateContact() {
    FILE *fp, *temp;
    struct contact c;
    char nameToUpdate[50];
    int found = 0;

    fp = fopen("contacts.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("File error.\n");
        return;
    }

    printf("Enter the name of the contact to update: ");
    scanf("%s", nameToUpdate);

    while (fscanf(fp, "%s %s %s %s %s", c.name, c.ph, c.mail, c.add, c.dob) == 5) {
        if (strcmp(c.name, nameToUpdate) == 0) {
            found = 1;
            printf("Enter new phone: ");
            scanf("%s", c.ph);
            printf("Enter new email: ");
            scanf("%s", c.mail);
            printf("Enter new address: ");
            scanf("%s", c.add);
            printf("Enter new DOB (DD-MM-YYYY): ");
            scanf("%s", c.dob);
        }
        fprintf(temp, "%s %s %s %s %s\n", c.name, c.ph, c.mail, c.add, c.dob);
    }

    fclose(fp);
    fclose(temp);

    if (found) {
        printf("Contact updated successfully! View updated list in 'temp.txt'.\n");
    } else {
        printf("Contact not found.\n");
    }
}

