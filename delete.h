void deleteContact() {
    FILE *fp, *temp;
    struct contact c;
    char nameToDelete[50];
    int found = 0;

    fp = fopen("contacts.txt", "r");
    temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL) {
        printf("File error.\n");
        return;
    }

    printf("Enter the name of the contact to delete: ");
    scanf("%s", nameToDelete);

    while (fscanf(fp, "%s %s %s %s %s", c.name, c.ph, c.mail, c.add, c.dob) == 5) {
        if (strcmp(c.name, nameToDelete) == 0) {
            found = 1;
            continue; 
        }
        fprintf(temp, "%s %s %s %s %s\n", c.name, c.ph, c.mail, c.add, c.dob);
    }

    fclose(fp);
    fclose(temp);

    if (found) {
        printf("Contact deleted successfully! View updated list in 'temp.txt'.\n");
    } else {
        printf("Contact not found.\n");
    }
}
