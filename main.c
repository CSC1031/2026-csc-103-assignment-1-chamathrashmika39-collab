#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1, m2, m3, total;
    float average;
    char grade;
    char status;
    printf("--------------------------STUDENT GRADE ANALYZER--------------------------\n\n");
    printf("Please Enter the Student's Mathematics Marks: ", m1);
    scanf("%d", &m1);
    printf("Please Enter the Student's Science Marks    : ", m2);
    scanf("%d", &m2);
    printf("Please Enter the Student's English Marks    : ", m3);
    scanf("%d", &m3);

    //calculate the total marks
    total = m1 + m2 + m3;
    printf("\nThe Total Marks of the student              :%d\n", total);

    //calculate the average marks
    average = (m1 + m2 + m3)/ 3.0;
    printf("The Average Marks of the student            :%.2f\n", average);

    //calculating the grade
    if (average >= 80)
    {
       grade = 'A';
    }
    else if (average >= 70)
    {
        grade = 'B';
    }
    else if (average >= 60)
    {
        grade = 'C';
    }
    else if (average >= 50)
    {
        grade = 'D';
    }
    else{
        grade = 'F';
    }


    printf("The Grade of the Student                    :%c\n", grade);

    //Finalize the pass fail status
    if (m1<40)
    {
        status = 'F';
    }
    else if (m2<40)
    {
        status = 'F';
    }
    else if (m3<40)
    {
        status = 'F';
    }
    else {
        status = 'P';
    }
    printf("The Pass/Fail status of the student         :%c", status);




    return 0;
}
