#include <stdio.h>

struct Book {
    int id;
    char title[50];
    float price;
};

int main() {
    struct Book books[100];
    int count = 0;
    int choice, i, position, id;

    do {
        printf("\n1. Insert book\n");
        printf("2. Delete book\n");
        printf("3. Search book\n");
        printf("4. Display all books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count == 100) {
                printf("Book list is full.\n");
                continue;
            }

            printf("Enter position (1 to %d): ", count + 1);
            scanf("%d", &position);

            if (position < 1 || position > count + 1) {
                printf("Invalid position.\n");
                continue;
            }

            for (i = count; i >= position; i--) {
                books[i] = books[i - 1];
            }

            printf("Enter Book ID: ");
            scanf("%d", &books[position - 1].id);

            printf("Enter title (one word): ");
            scanf("%49s", books[position - 1].title);

            printf("Enter price: ");
            scanf("%f", &books[position - 1].price);

            count++;
            printf("Book added.\n");
        }

        else if (choice == 2) {
            printf("Enter Book ID to delete: ");
            scanf("%d", &id);

            for (i = 0; i < count; i++) {
                if (books[i].id == id) {
                    for (int j = i; j < count - 1; j++) {
                        books[j] = books[j + 1];
                    }
                    count--;
                    printf("Book deleted.\n");
                    break;
                }
            }

            if (i == count) {
                printf("Book not found.\n");
            }
        }

        else if (choice == 3) {
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            for (i = 0; i < count; i++) {
                if (books[i].id == id) {
                    printf("ID: %d, Title: %s, Price: %.2f\n",
                           books[i].id, books[i].title, books[i].price);
                    break;
                }
            }

            if (i == count) {
                printf("Book not found.\n");
            }
        }

        else if (choice == 4) {
            if (count == 0) {
                printf("No books stored.\n");
            } else {
                for (i = 0; i < count; i++) {
                    printf("ID: %d, Title: %s, Price: %.2f\n",
                           books[i].id, books[i].title, books[i].price);
                }
            }
        }

    } while (choice != 5);

    return 0;
}