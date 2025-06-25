void addContact() {
    FILE *fp;
    struct contact c;

    fp = fopen("contacts.txt", "a");
    if (fp == NULL) 
    {
        printf("File could not be opened.\n");
        return;
    }

    printf("Enter Name: ");
    scanf("%s", c.name);

    printf("Enter Phone: ");
    scanf("%s", c.ph);

    printf("Enter Email: ");
    scanf("%s", c.mail);

    printf("Enter Address: ");
    scanf("%s", c.add);

    printf("Enter Birthday (DD-MM-YYYY): ");
    scanf("%s", c.dob);
    fprintf(fp, "%s %s %s %s %s\n", c.name, c.ph, c.mail, c.add, c.dob);

    fclose(fp);
    printf("Contact added successfully!\n");
}