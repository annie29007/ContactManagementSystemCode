void sortContacts()
{
    FILE *fp;
    struct contact c[100]; 
    int count = 0, i, j;

    fp = fopen("contacts.txt", "r");
    if (fp == NULL) {
        printf("No contacts to sort.\n");
        return;
    }
    
    while (fscanf(fp, "%s %s %s %s %s", c[count].name, c[count].ph, c[count].mail, c[count].add, c[count].dob) == 5)
    {
        count++;
    }
    fclose(fp);
    
    for (i = 0; i < count - 1; i++) 
    {
        for (j = i + 1; j < count; j++) 
        {
            if (strcmp(c[i].name, c[j].name) > 0) 
            {
                struct contact temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\n--- Sorted Contact List ---\n");
    for (i = 0; i < count; i++)
    {
        printf("Name     : %s\n", c[i].name);
        printf("Phone    : %s\n", c[i].ph);
        printf("Email    : %s\n", c[i].mail);
        printf("Address  : %s\n", c[i].add);
        printf("Birthday : %s\n", c[i].dob);
        printf("-----------------------------\n");
    }
}