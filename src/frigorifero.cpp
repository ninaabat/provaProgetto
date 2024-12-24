#include "../include/frigorifero.h"
#include <iostream>

frigorifero::frigorifero() : id(6), name("frigorifero"), power(0.4), isOn(false) {
    std::cout << "costruttore frigo chiamato" << std::endl;
}

int frigorifero::getId() {
        return id;
}