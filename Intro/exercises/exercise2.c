/*
 *2. Product Information

Create a program that displays the details of a product
in an online store.Create a product name using char[].

Store its price using double.

Store its quantity using int.

Store whether it's available using bool.

Display everything in a readable format.


Example output

Product: Laptop
Price: $899.99
Quantity: 3
Available: 1
 *
 *
 */
#include <stdbool.h>
#include <stdio.h>

int main (void) {

    char product[] = "Laptop";
    double price = 899.99;
    int qt = 3;
    bool isAvailable = 1;

    /*
    Example output:

    Product: Laptop
    Price: $899.99
    Quantity: 3
    Available: 1
    */
    printf("Product: %s\nPrice: %.2f\nQuantity: %d\nAvailable: %d\n",
        product, price, qt, isAvailable);


    return 0;
}