#include <iostream>

int main(){
    /*
    // Printing data
    std::cout << "Hello C++20!" << std::endl;

    int age{21};
    std::cout << "Age : " << age << std::endl;

    // Error and Log output
    std::cerr << "Error message: something is wrong!" << std::endl;
    std::clog << "Log message : something happened." << std::endl;
    */

    // // Input
    // int age1;
    // std::string name;

    // std::cout << "Please type your name and age: " << std::endl;

    // //std::cin >> name;
    // //std::cin >> age1;

    // std::cin >> name >> age1;

    std::string full_name;
    int age2;

    std::cout << "Please type in your full name and age" << std::endl;

    std::getline(std::cin, full_name);
    std::cin >> age2;

    std::cout << "Hello " << full_name << " you are " 
        << age2 << " years old!" << std::endl;

    return 0;
}