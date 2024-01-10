#include <stdio.h>
#include "product.h"
#include "shopping_cart.h"
#include "customer.h"
#include "order.h"

int main() {
    // Create products
    Product product1 = createProduct("Laptop", 1000);
    Product product2 = createProduct("Smartphone", 500);
    Product product3 = createProduct("Headphones", 50);

    // Create a customer
    Customer customer = createCustomer("John Doe");

    // Add products to the shopping cart
    ShoppingCart shoppingCart = createShoppingCart();
    addToCart(&shoppingCart, product1, 2);
    addToCart(&shoppingCart, product2, 1);
    addToCart(&shoppingCart, product3, 3);

    // Place an order
    Order order = createOrder(customer, shoppingCart);

    // Display order details
    displayOrder(order);

    return 0;
}
