void viewContacts() 
{
    FILE *fp;
    struct contact c;

    fp = fopen("contacts.txt", "r");
    if (fp == NULL) {
        printf("No contacts found.\n");
        return;
    }

    printf("\n--- All Contacts ---\n");

    while (fscanf(fp, "%s %s %s %s %s", c.name, c.ph, c.mail, c.add, c.dob) == 5) {
        printf("Name     : %s\n", c.name);
        printf("Phone    : %s\n", c.ph);
        printf("Email    : %s\n", c.mail);
        printf("Address  : %s\n", c.add);
        printf("Birthday : %s\n", c.dob);
        printf("----------------------------\n");
    }

    fclose(fp);
}
