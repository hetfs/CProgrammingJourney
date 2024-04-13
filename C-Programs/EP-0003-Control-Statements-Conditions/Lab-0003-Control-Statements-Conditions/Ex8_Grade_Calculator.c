#include <stdio.h>

int main() {
    // Step 1: Input Marks
    float math, english, physics, chemistry;
    printf("Enter marks obtained in Math: ");
    scanf("%f", &math);
    printf("Enter marks obtained in English: ");
    scanf("%f", &english);
    printf("Enter marks obtained in Physics: ");
    scanf("%f", &physics);
    printf("Enter marks obtained in Chemistry: ");
    scanf("%f", &chemistry);
    
    // Step 2: Calculate Total Marks
    float totalMarks = math + english + physics + chemistry;
    
    // Step 3: Calculate Average
    float averageMarks = totalMarks / 4.0;
    
    // Step 4: Determine Grade
    char grade;
    if (averageMarks >= 90) {
        grade = 'A';
    } else if (averageMarks >= 80 && averageMarks < 90) {
        grade = 'B';
    } else if (averageMarks >= 70 && averageMarks < 80) {
        grade = 'C';
    } else if (averageMarks >= 60 && averageMarks < 70) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    
    // Step 5: Display Grade
    printf("Average marks: %.2f\n", averageMarks);
    printf("Grade: %c\n", grade);
    
    // Step 6: End
    return 0;
}


// Algorithm to calculate the grade of a student based on their marks:

// 1. **Input Marks**: Prompt the user to input the marks obtained by the student in each subject (e.g., Math, English, Physics, Chemistry).

// 2. **Calculate Total Marks**: Calculate the total marks obtained by summing up the marks obtained in all subjects.

// 3. **Calculate Average**: Calculate the average marks by dividing the total marks by the number of subjects.

// 4. **Determine Grade**:
//    - If the average marks are greater than or equal to 90, assign grade 'A'.
//    - If the average marks are between 80 and 89, assign grade 'B'.
//    - If the average marks are between 70 and 79, assign grade 'C'.
//    - If the average marks are between 60 and 69, assign grade 'D'.
//    - If the average marks are below 60, assign grade 'F'.

// 5. **Display Grade**: Output the calculated grade for the student.

// 6. **End**: End the program.
