#ifndef PRODUCT_H
#define PRODUCT_H

typedef struct {
    char name[50];
    double price;
} Product;

Product createProduct(const char* name, double price);

#endif // PRODUCT_H
