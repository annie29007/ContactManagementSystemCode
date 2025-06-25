#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "auth.h"
#include "struct.h"
#include "add.h"
#include "view.h"
#include "search.h"
#include "update.h"
#include "delete.h"
#include "birthday.h"
#include "sort.h"

int main() {
    int choice;


    if (access() == 0) {
        printf("--Access Denied--\n");
        return 0;
    }

    do {
        printf("\n----- Contact Management Menu -----\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Birthday Reminder\n");
        printf("7. Sort Contacts\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: searchContact(); break;
            case 4: updateContact(); break;
            case 5: deleteContact(); break;
            case 6: birthdayReminder(); break;
            case 7: sortContacts(); break;
            case 8: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 7);

    return 0;
}
