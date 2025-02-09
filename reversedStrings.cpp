#include <iostream>
#include <string>
#include <algorithm>

std::string reverseString(std::string str) {
  std::reverse(str.begin(), str.end());
  return str;
}

int main() {
  std::string inputString;

  std::cout << "Enter a string: ";
  std::getline(std::cin, inputString); 

  std::string reversedString = reverseString(inputString);

  std::cout << "Reversed string: " << reversedString << std::endl;

  return 0;
}
