#include <stdio.h>

int main(void) {
    /*
    *Create a program that stores and displays information about a person.
    *Store a person's age using int.

    Store their GPA using double.

    Store their first initial using char.

    Store their name using a character array.

    Print all four values using printf().


    Example output

    Name: Alex
    Age: 22
    GPA: 3.5
    Initial: A
     *
     *
     *
     */
    char name[] = "Alex";
    int age = 25;
    double gpa = 3.5;
    char initial = 'A';

    printf("Name: %s\nAge: %d\nGPA: %.1f\nInitial: %c", name, age, gpa, initial);


    return 0;
}