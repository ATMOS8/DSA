#include <iostream>
#include <random>
int main() {
    std::random_device rd; 
    std::mt19937 gen(rd()); 
    std::uniform_int_distribution<int> dist(100, 999); 
    int randomNumber = dist(gen); 
    std::cout << "Random 3-digit number: " << randomNumber << std::endl;
    return 0;
}