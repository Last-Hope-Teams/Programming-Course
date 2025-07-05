#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    float weight;
    float height;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your weight (kg): ";
    std::cin >> weight;
    std::cout << "Enter your height (cm): ";
    std::cin >> height;
    const float conversion {height / 100};
    float bmi {weight / (conversion * conversion)};
    std::cout << "Name: " << name << "\t Age: " << age << "\t BMI: "<< bmi << std::endl;
    return 0;
}     
