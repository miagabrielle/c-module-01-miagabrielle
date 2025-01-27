#include <iostream>
#include <string>

int main() {
    std::string name;

    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);  // Read the whole line (in case the name has spaces)

    
    std::cout << "Hello, " << name << "! It's great to meet you!" << std::endl;

    return 0;
}
