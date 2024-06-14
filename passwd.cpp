#include "passwd.h"


/*
int get_length(bool running){

    int size;

    while (true){
        std::cout << "What is the desired length of your program: ";
        std::cin >> size;

    // const char * type_length = typeid(size).name();
    // std::cout << type_length << std::endl ;
    // var_type(size);
    
    
        if (size > 0){
            // std::cout << "test"; //debug
            return size;
        }
        else {
            std::cout << "Your value should be an integer and larger than 0";
            
        }
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