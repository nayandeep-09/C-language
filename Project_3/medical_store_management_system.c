#include <stdio.h>

struct medicine {
    int id;
    char name[20];
    int quantity;
    float price;
};

int main() {
    struct medicine m[50];
    int choice, count = 0;
    int i, searchId, found, pass;

    while (1) {
        printf("\n MEDICAL STORE MANAGEMENT SYSTEM \n");
        printf("1. Add Medicine to stock (Admin)\n");
        printf("2. View Medicines in stock (Admin)\n");
        printf("3. Search Medicine from stock\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        /* EXIT */
        if (choice == 4) {
            printf("\nThank you! Program closed.\n");
            break;
        }

        /* SEARCH MEDICINE (NO PASSWORD) */
        else if (choice == 3) {

            if (count == 0) {
                printf("\nNo medicine in stock.\n");
            } 
            else {
                printf("\nEnter Medicine ID to search: ");
                scanf("%d", &searchId);

                found = 0;
                for (i = 0; i < count; i++) {
                    if (m[i].id == searchId) {
                        printf("\nMedicine Found!\n");
                        printf("Name: %s\n", m[i].name);
                        printf("Quantity: %d\n", m[i].quantity);
                        printf("Price: %.2f\n", m[i].price);
                        found = 1;
                        break;
                    }
                }

                if (found == 0) {
                    printf("\nMedicine not found.\n");
                }
            }
        }

        /* ADMIN OPTIONS */
        else if (choice == 1 || choice == 2) {

            printf("Enter admin password: ");
            scanf("%d", &pass);

            if (pass == 123) {

                /* ADD MEDICINE */
                if (choice == 1) {
                    printf("\nEnter Medicine ID: ");
                    scanf("%d", &m[count].id);

                    printf("Enter Medicine Name: ");
                    scanf("%s", m[count].name);

                    printf("Enter Quantity: ");
                    scanf("%d", &m[count].quantity);

                    printf("Enter Price: ");
                    scanf("%f", &m[count].price);

                    count++;
                    printf("\nMedicine Added Successfully!\n");
                }

                /* VIEW MEDICINES */
                else if (choice == 2) {

                    if (count == 0) {
                        printf("\nNo medicine in stock.\n");
                    } 
                    else {
                        printf("\nID\tName\tQuantity\tPrice\n");
                        for (i = 0; i < count; i++) {
                            printf("%d\t%s\t%d\t\t%.2f\n",
                                   m[i].id, m[i].name, m[i].quantity, m[i].price);
                        }
                    }
                }
            } 
            else {
                printf("\nAccess Denied! You are not admin or owner.\n");
            }
        }

        /* INVALID OPTION */
        else {
            printf("\nInvalid choice. Please try again.\n");
        }
    }

    return 0;
}
