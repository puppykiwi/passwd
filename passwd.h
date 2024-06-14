#include <iostream>
#include <typeinfo>
#include <limits>
#include <random>
#include <string>

int get_length();

std::string gen_passwd(int length);

template <typename T>
void var_type (T var) {
    std::cout << typeid(var).name() << std::endl;
}

