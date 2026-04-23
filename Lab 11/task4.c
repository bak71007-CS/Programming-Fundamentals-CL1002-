#include <stdio.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    char bloodType[5];
    int patientID;
    char diagnosis[100];
};

void displayAll(struct Patient p[], int n) {
    printf("\n--------------Patient Records--------------\n");
    printf("ID\tName\t\tAge\tBlood\tDiagnosis\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%-15s\t%d\t%-5s\t%s\n",
               p[i].patientID,
               p[i].name,
               p[i].age,
               p[i].bloodType,
               p[i].diagnosis);
    }
}

void searchByID(struct Patient p[], int n, int id) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (p[i].patientID == id) {
            printf("\nPatient Found:\n");
            printf("ID: %d\n", p[i].patientID);
            printf("Name: %s\n", p[i].name);
            printf("Age: %d\n", p[i].age);
            printf("Blood Type: %s\n", p[i].bloodType);
            printf("Diagnosis: %s\n", p[i].diagnosis);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nPatient not found\n");
    }
}

int main() {
    struct Patient patients[5];

    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Patient %d\n", i + 1);

        printf("Enter Patient ID: ");
        scanf("%d", &patients[i].patientID);

        printf("Enter Name: ");
        scanf(" %[^\n]", patients[i].name);

        printf("Enter Age: ");
        scanf("%d", &patients[i].age);

        printf("Enter Blood Type: ");
        scanf("%s", patients[i].bloodType);

        printf("Enter Diagnosis: ");
        scanf(" %[^\n]", patients[i].diagnosis);
    }

    displayAll(patients, 5);

    int searchID;
    printf("\nEnter Patient ID to search: ");
    scanf("%d", &searchID);

    searchByID(patients, 5, searchID);

    return 0;
}