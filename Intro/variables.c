#include <stdio.h>
#include <stdbool.h>

int main (void) {


    // A variable stores a value that can be accessed and updated.
    // When used, it represents the value currently stored inside it.

    // Common data types in C:

    // int    - Stores whole numbers (typically 4 bytes).
    // float  - Stores decimal numbers with single precision (typically 4 bytes).
    // double - Stores decimal numbers with higher precision (typically 8 bytes).
    // char   - Stores a single character (1 byte).
    // char[] - Holds a sequence of characters (size depends on the array).
    // bool   - Represents true or false (requires <stdbool.h> in C11).

    /* #1. Intro to variables
    //Variable: a reusable container for a value
    int age = 25;
    int year = 2026;
    int quantity = 1;

    //&d stands for decimal
    printf("You are %d years old \n", age);
    printf("The year is %d\n", year);
    printf("You've order %d items", quantity);
*/
    //#2. Float data type (floating point number)
    double gpa = 2.5;
    printf("You have a %.1f GPA\n", gpa);
    //% - It is called format specifier.

    double price = 100.5;
    printf("The price is %.1f $.\n", price);

    double PI = 3.1415926535;
    printf("PI = %.lf" ,PI);
    //lf - long float


    //#3. char data type - a character

    char ch = 'h';
    //The "%" is called a format specifier
    printf("Hello this is a character: %c", ch);

    //#4. Sequence of characters (STRING)
    char word[] = "Hello world";
    printf("This is a important message: %s", word);


    //#5.  Boolean data type (True/False) (1/0)
    bool isAdult = true;
    printf("%d", isAdult);


    return 0;
}
