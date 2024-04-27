#include <iostream>
#include <string>

int main() {
    int age, standard;
    std::string first_name, last_name;

    std::cin >> age;
    std::cin >> first_name;
    std::cin >> last_name;
    std::cin >> standard;

    std::cout << age << " " << first_name << " " << last_name << " " << standard << std::endl;

    return 0;
}

