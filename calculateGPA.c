#include <stdio.h>

float calculateGPA(int marks) {
    if (marks >= 85) {
        return 4.0;
    } else if (marks >= 80) {
        return 3.7;
    } else if (marks >= 75) {
        return 3.3;
    } else if (marks >= 70) {
        return 3.0;
    } else if (marks >= 65) {
        return 2.7;
    } else if (marks >= 60) {
        return 2.3;
    } else {
        return 0.0; // Indicating Fail
    }
}

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);
    
    float gpa = calculateGPA(marks);
    
    if (gpa == 0.0) {
        printf("GPA = Fail\n");
    } else {
        printf("GPA = %.1f\n", gpa);
    }
    
    return 0;
}