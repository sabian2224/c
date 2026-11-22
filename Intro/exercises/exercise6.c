/*6. Mini Shopping Cart

[Challenge]


Combine variables, data types, printf(),
and basic multiplication to display a simple shopping cart.
Create two product names as character arrays.

Give each product a price and a quantity.

Calculate each product's subtotal.

Calculate the combined total.

Display the final receipt with two decimal places.


Example output

--- SHOPPING CART ---
Laptop: 1 x $750.00 = $750.00
Mouse: 2 x $15.50 = $31.00
---------------------
Total: $781.00
 */

#include <stdio.h>

int main(void) {
    //1.Deklarojme & inicializojme variablat
    char p1[] ="Laptop";
    char p2[] = "Mouse";
    double p1_price = 750;
    double p2_price = 15.5;
    int p1_qt = 1;
    int p2_qt = 2;
    double p1_total = p1_qt * p1_price;
    double p2_total = p2_qt * p2_price;

    double total_price = p1_total + p2_total;


    printf("--- SHOPPING CART ---\n");
    printf("%s: %d x $%.2f = $%.2f\n", p1, p1_qt, p1_price, p1_total);
    printf("%s: %d x $%.2f = $%.2f\n", p2, p2_qt, p2_price, (p2_qt*p2_price));
    printf("---------------------\n");
    printf("Total = $%.2f", total_price);



    return 0;
}