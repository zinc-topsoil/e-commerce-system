#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include "product.h"

typedef struct {
    Product products[100];
    int quantities[100];
    int itemCount;
} ShoppingCart;

ShoppingCart createShoppingCart();
void addToCart(ShoppingCart* cart, Product product, int quantity);

#endif // SHOPPING_CART_H
