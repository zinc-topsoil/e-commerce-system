#include "order.h"
#include <stdio.h>

Order createOrder(Customer customer, ShoppingCart cart) {
    Order order;
    order.customer = customer;
    order.cart = cart;
    return order;
}

void displayOrder(Order order) {
    printf("Order for customer %s:\n", order.customer.name);
    printf("Products in the order:\n");

    for (int i = 0; i < order.cart.itemCount; i++) {
        printf("%s - Quantity: %d\n", order.cart.products[i].name, order.cart.quantities[i]);
    }
}
