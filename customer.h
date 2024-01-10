#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "shopping_cart.h"
#include "order.h"

typedef struct {
    char name[50];
    Order orders[100];
    int orderCount;
} Customer;

Customer createCustomer(const char* name);
Order placeOrder(Customer* customer, ShoppingCart cart);

#endif // CUSTOMER_H
