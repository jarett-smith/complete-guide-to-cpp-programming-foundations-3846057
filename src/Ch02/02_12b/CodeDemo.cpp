// Complete Guide to C++ Programming Foundations
// Exercise 02_12
// Type Inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    // must initialize the variables
    auto score = 8;
    auto points = 1235465498654654;
    auto height = 6.2f;
    auto duration = 90.0;
    auto is_active = true;
    auto initial = 'P'; // characters only have single quotes
    auto title = "Soccer Champions"; // Strings have double quotes

    std::cout << "The type of score is " << typeid(score).name() << std::endl;
    std::cout << "The type of points is " << typeid(points).name() << std::endl;
    std::cout << "The type of height is " << typeid(height).name() << std::endl;
    std::cout << "The type of duration is " << typeid(duration).name() << std::endl;
    std::cout << "The type of is_active is " << typeid(is_active).name() << std::endl;
    std::cout << "The type of initial is " << typeid(initial).name() << std::endl;
    std::cout << "The type of title is " << typeid(title).name() << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
