//Nested Structure + User Input
#include <stdio.h>

struct Address {
    char street[50];
    char city[50];
    char country[50];
};

struct Teacher {
    char name[50];
    int id;
    long long phoneno;
    struct Address addr;
};

int main() {
    struct Teacher t;

    // Clear input buffer and take full name
    printf("Enter Name: ");
    fgets(t.name, sizeof(t.name), stdin);

    printf("Enter ID: ");
    scanf("%d", &t.id);

    printf("Enter Phone Number: ");
    scanf("%lld", &t.phoneno);
    getchar(); // clear leftover \n

    // Now take Address (nested struct)
    printf("Enter Street: ");
    fgets(t.addr.street, sizeof(t.addr.street), stdin);

    printf("Enter City: ");
    fgets(t.addr.city, sizeof(t.addr.city), stdin);

    printf("Enter Country: ");
    fgets(t.addr.country, sizeof(t.addr.country), stdin);

    // Displaying everything
    printf("\n--- Teacher Details ---\n");
    printf("Name: %s", t.name);
    printf("ID: %d\n", t.id);
    printf("Phone No: %lld\n", t.phoneno);
    printf("Address:\n");
    printf("Street: %s", t.addr.street);
    printf("City: %s", t.addr.city);
    printf("Country: %s", t.addr.country);

    return 0;
}

