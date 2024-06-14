#include <iostream>
#include <typeinfo>
#include <limits>

int get_length();

template <typename T>
void var_type (T var) {
    std::cout << typeid(var).name() << std::endl;
}

