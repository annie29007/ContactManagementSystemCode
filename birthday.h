void birthdayReminder() {
    FILE *fp;
    struct contact c;
    char date[6]; 
    int found = 0;

    fp = fopen("contacts.txt", "r");
    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("Enter date to check birthdays (DD-MM): ");
    scanf("%s", date);

    printf("\n--- Birthdays on %s ---\n", date);

    while (fscanf(fp, "%s %s %s %s %s", c.name, c.ph, c.mail, c.add, c.dob) == 5) {
        if (strncmp(c.dob, date, 5) == 0) {
            printf(" %s - Birthday: %s\n", c.name, c.dob);
            found = 1;
        }
    }

    fclose(fp);

    if (!found) {
        printf("No birthdays on this date.\n");
    }
}
