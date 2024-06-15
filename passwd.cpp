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

std::string gen_passwd(int length){
    std::string passwd = "";
    int max = 126;
    int min = 33;

    std::random_device rdev;
    std::mt19937 gen(rdev());
    std::uniform_int_distribution<int> dist(min, max);
    
    // std::cout  << dist(gen); //debug
    
    // std::cout  << dist(gen); //debug

    for (int i =0; i < length; i++){

        int num = dist(gen);
        char c = num;
        // std::cout << i; //debug
        passwd += c;

    }

    
    
    return passwd;
}

int main(){
    
    int length = get_length();
    std::string passwd = gen_passwd(length);
    std::cout << "Your passwd, sir: " << passwd << std::endl;

    
}
