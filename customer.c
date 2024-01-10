#include "customer.h"
#include <string.h>

Customer createCustomer(const char* name) {
    Customer customer;
    strcpy(customer.name, name);
    customer.orderCount = 0;
    return customer;
}

Order placeOrder(Customer* customer, ShoppingCart cart) {
    Order order;
    order.customer = *customer;
    order.cart = cart;
    customer->orders[customer->orderCount] = order;
    customer->orderCount++;
    return order;
}
