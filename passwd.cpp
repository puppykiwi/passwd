#include <iostream>
#include <typeinfo>
#include <limits>
#include "passwd.h"

template <typename T>
void var_type (T var) {
    std::cout << typeid(var).name() << std::endl;
}

<<<<<<< HEAD

/*
int get_length(bool running){

    int size;

    while (true){
        std::cout << "What is the desired length of your program: ";
        std::cin >> size;
=======
int main(){
     
    int length = get_length();
}

int get_length(){

    int size;
    std::cout << "What is the desired length of your program: ";
    std::cin >> size;
>>>>>>> parent of 9ac6d86 (uhhu)

    // const char * type_length = typeid(size).name();
    // std::cout << type_length << std::endl ;
    // var_type(size);
    
    
<<<<<<< HEAD
        if (size > 0){
            // std::cout << "test"; //debug
            return size;
        }
        else {
            std::cout << "Your value should be an integer and larger than 0";
            
        }
=======

    if (size > 0){
        // std::cout << "test"; //debug
        return size;
    }
    else {
        std::cout << "Your value should be an integer and larger than 0";
        return get_length();
>>>>>>> parent of 9ac6d86 (uhhu)
    }
    
    return 0;
}
*/

int get_length() {
    int size;
    
    while (true) { 
        std::cout << "What is the desired length of your program: ";
        std::cin >> size;

        if (size > 0) {
            return size;
        } else {
            std::cout << "Your value should be an integer and larger than 0. Please try again.\n";
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }
    }
}

int main(){
    
    int length = get_length();
    
}