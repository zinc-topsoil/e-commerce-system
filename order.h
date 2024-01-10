#ifndef ORDER_H
#define ORDER_H

#include "customer.h"
#include "shopping_cart.h"

typedef struct {
    Customer customer;
    ShoppingCart cart;
} Order;

Order createOrder(Customer customer, ShoppingCart cart);
void displayOrder(Order order);

#endif // ORDER_H
