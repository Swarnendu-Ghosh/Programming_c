//Write a program in c to calculate the grade of the student according to specific marks:
//95 to 100:AA
//85 to 95:A+
//70 to 85:A
//60 to 70:B
//45 to 60:C
//<45:D
#include <stdio.h>

int main() {
    int marks;
    printf("Enter Marks:\n");
    scanf("%d", &marks);
    
    if ((marks > 100) || (marks < 0)) {
        printf("WRONG ENTRY. TRY AGAIN.\n");
    } else if ((marks <= 100) && (marks >= 95)) {
        printf("Grade is: O\n");
    } else if ((marks < 95) && (marks >= 85)) {
        printf("Grade is: A+\n");
    } else if ((marks < 85) && (marks >= 70)) {
        printf("Grade is: A\n");
    } else if ((marks < 70) && (marks >= 60)) {
        printf("Grade is: B\n");
    } else if ((marks < 60) && (marks >= 45)) {
        printf("Grade is: C\n");
    } else {
        printf("Grade is: D\n");
    }

    return 0;
}