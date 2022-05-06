#include <iostream>
#include <iomanip>

int main(){
    //Declare and initialize the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //Precision
    std::cout << std::setprecision(20); //Control the precision from std::cout.
    std::cout << "number 1 is: " << number1 << std::endl; // Precision: 7
    std::cout << "number 2 is: " << number2 << std::endl; // Precision: 15
    std::cout << "number 3 is: " << number3 << std::endl; // Precision: 15+

    //Print out the sizes
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    double number10 {5.6};
    double number11 {}; //Initialized to 0
    double number12 {}; //Initialized to 0

    //Infinity
    double result {number10/number11};

    std::cout << number10 << "/" << number11 << " yields " << result <<std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

    //NaN
    result = number11/number12;

    std::cout << number11 << "/" << number12 << " = " << result << std::endl;
    
    return 0;
}