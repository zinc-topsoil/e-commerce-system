#include "shopping_cart.h"

ShoppingCart createShoppingCart() {
    ShoppingCart cart;
    cart.itemCount = 0;
    return cart;
}

void addToCart(ShoppingCart* cart, Product product, int quantity) {
    if (cart->itemCount < 100) {
        cart->products[cart->itemCount] = product;
        cart->quantities[cart->itemCount] = quantity;
        cart->itemCount++;
    }
}
