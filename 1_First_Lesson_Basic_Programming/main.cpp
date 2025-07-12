#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    float weight;
    float height;
    const float conversion = 0.01;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Enter your weight (kg): ";
    std::cin >> weight;
    std::cout << "Enter your height (cm): ";
    std::cin >> height;
    float height_meter {height * conversion};
    float bmi {weight / (height_meter * height_meter)};
    std::cout << "Name: " << name << "\t Age: " << age << "\t BMI: "<< bmi << std::endl;
    return 0;
}    