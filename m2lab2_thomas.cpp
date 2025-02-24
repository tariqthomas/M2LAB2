#include <iostream>

int main() {
    // Declaring variables
    int age = 25;
    double height = 5.9;
    char grade = 'A';
    std::string name = "John";
    bool isStudent = true;

    // Printing variable values
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " feet" << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is student: " << (isStudent ? "Yes" : "No") << std::endl;

    return 0;
}