/************************************************************
 * Name: letter_grading                                     *
 * Purpose: Converts a numerical grade into a letter grade. *
 * Author: Shreejit Pahari                                  *
 ************************************************************/

#include <stdio.h>

int main(void) {
    printf("Enter numerical grade: ");
    short num_grade;
    scanf("%hd", &num_grade);

    printf("Letter grade: ");
    num_grade = ((num_grade < 0) || (num_grade > 100)) ? -11 : num_grade;
    switch (num_grade / 10) {
        case 10: case 9:
            printf("A\n"); break;
        case 8:
            printf("B\n"); break;
        case 7:
            printf("C\n"); break;
        case 6:
            printf("D\n"); break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("F\n"); break;
        default:
            printf("Error!!!\nGrade cannot be larger than 100 or less than 0...");
    }
}