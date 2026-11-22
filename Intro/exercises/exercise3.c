/*
3. Student Report

[Easy]

Create a simple student report using variables
and formatted output.Store the student's name and age.

Create three double variables for three subject grades.

Display each grade with one decimal place.

Add a bool variable indicating whether the student passed.

Print all information as a report.


Example output

Student: Maria
Age: 20
Math: 8.5
English: 9.0
Programming: 9.5
Passed: 1
 */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
  char student[] = "Maria";
  int age = 20;
  double math = 8.5;
  double english = 9.0;
  double programming = 9.5;
  bool passed = true;

 printf("Student %s\nAge: %d\nMath: %.1f\nEnglish: "
        "%.1f\nProgramming: %.1f\nPassed: %d", student, age, math, english, programming, passed);

 return 0;
}