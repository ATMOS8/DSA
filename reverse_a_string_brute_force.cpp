#include <iostream>
#include <string>
int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        std::swap(str[i], str[n - i - 1]);
    }
    std::cout << "Reversed string: " << str << std::endl;
    return 0;
}