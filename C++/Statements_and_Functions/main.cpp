#include <iostream>

// Function declaration
int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

// Function declaration for multiplication
int multiplyNumbers( int first_param, int second_param){
    int result = first_param * second_param;
    return result;
}

int main(){
    // Function call
    int sum = addNumbers(25, 7); // Statement
    std::cout << "Sum : " << sum << std::endl;

    // Function call inside another function
    std::cout << "Sum : " << addNumbers(4, 3) << std::endl;

    // Function call for multiplication
    std::cout << "Multiplication result: " << multiplyNumbers(6,6) << std::endl;
}