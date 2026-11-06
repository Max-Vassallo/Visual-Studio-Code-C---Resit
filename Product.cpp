#include "Product.h"

Product::Product(std::string name, double price)
    : name(name), price(price) {
}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

double Product::priceAfterDiscount(double percent) const {
    if (percent < 0 || percent > 100) {
        return price;
    }

    return price - (price * percent / 100);
}