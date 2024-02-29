#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent an employee
struct Employee {
    int id;
    char name[50];
    char password[20];
};

// Function to add a new employee
void addEmployee(struct Employee employees[], int *count) {
    struct Employee newEmployee;

    printf("Enter Employee ID: ");
    scanf("%d", &newEmployee.id);
    printf("Enter Employee Name: ");
    scanf("%s", newEmployee.name);
    printf("Enter Password: ");
    scanf("%s", newEmployee.password);

    employees[*count] = newEmployee;
    (*count)++;
    printf("Employee added successfully!\n");
}

// Function to view all employee records
void viewEmployees(struct Employee employees[], int count) {
    printf("\nEmployee Records:\n");
    printf("ID\tName\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%s\n", employees[i].id, employees[i].name);
    }
}

// Function to edit/update password
void editPassword(struct Employee employees[], int count, int id) {
    char newPassword[20];

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Enter new password: ");
            scanf("%s", newPassword);
            strcpy(employees[i].password, newPassword);
            printf("Password updated successfully!\n");
            return;
        }
    }

    printf("Employee with ID %d not found.\n", id);
}

// Function to search for an employee by ID
void searchEmployee(struct Employee employees[], int count, int id) {
    printf("\nEmployee Records:\n");
    printf("ID\tName\n");

    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("%d\t%s\n", employees[i].id, employees[i].name);
            return;
        }
    }

    printf("Employee with ID %d not found.\n", id);
}

// Function to delete an employee by ID
void deleteEmployee(struct Employee employees[], int *count, int id) {
    for (int i = 0; i < *count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < (*count - 1); j++) {
                employees[j] = employees[j + 1];
            }
            (*count)--;
            printf("Employee with ID %d deleted successfully!\n", id);
            return;
        }
    }

    printf("Employee with ID %d not found.\n", id);
}

int main() {
    struct Employee employees[100]; // Assuming a maximum of 100 employees
    int count = 0;
    int choice;

    while (1) {
        printf("\nEmployee Record Management System\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Edit Password\n");
        printf("4. Search Employee by ID\n");
        printf("5. Delete Employee by ID\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                viewEmployees(employees, count);
                break;
            case 3:
                printf("Enter your Employee ID: ");
                int id;
                scanf("%d", &id);
                editPassword(employees, count, id);
                break;
            case 4:
                printf("Enter Employee ID to search: ");
                scanf("%d", &id);
                searchEmployee(employees, count, id);
                break;
            case 5:
                printf("Enter Employee ID to delete: ");
                scanf("%d", &id);
                deleteEmployee(employees, &count, id);
                break;
            case 6:
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

