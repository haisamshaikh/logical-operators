#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks of student: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade A+");
    } else if (marks >= 80 && marks < 90) {
        printf("Grade A");
    } else if (marks >= 70 && marks < 80) {
        printf("Grade B");
    } else if (marks >= 60 && marks < 70) {
        printf("Grade C");
    } else if (marks >= 0 && marks < 60) {
        printf("Grade F");
    } else {
        printf("Invalid marks entered.");
    }

    return 0;
}
