#include <stdio.h>

// Define the structure first
struct Student {
    char name[50];
    int age;
    char grade;
};

// Declare function prototypes
void printStudent(struct Student* s);
void updateAge(struct Student* s, int newAge);
void updateGrade(struct Student* s, char newGrade);

int main() {
    // Correctly initialize a Student structure
    struct Student student = {"John Doe", 20, 'A'};

    printf("Before Update:\n");
    printStudent(&student); // Now the compiler knows about printStudent

    updateAge(&student, 21);
    updateGrade(&student, 'B');

    printf("\nAfter Update:\n");
    printStudent(&student);

    return 0;
}

// Function Definitions
void updateAge(struct Student* s, int newAge) {
    s->age = newAge;
}

void updateGrade(struct Student* s, char newGrade) {
    s->grade = newGrade;
}

// Function to print the student's details
void printStudent(struct Student* s) {
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Grade: %c\n", s->grade);
}
