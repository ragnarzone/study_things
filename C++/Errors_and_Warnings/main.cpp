#include <iostream>

int main(){

    //Compile time error
    std::cout << "Hello World!" << std::endl;

    //Run time error and Warning
    int value = 7/0;
    std::cout << "Value : " << value << std::endl;
    return 0;
}