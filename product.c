#include "product.h"
#include <string.h>

Product createProduct(const char* name, double price) {
    Product product;
    strcpy(product.name, name);
    product.price = price;
    return product;
}
