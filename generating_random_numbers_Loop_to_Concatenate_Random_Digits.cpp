#include <iostream>
#include <cstdlib>
#include <ctime>    
int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int digit1 = rand() % 9 + 1; 
    int digit2 = rand() % 10;   
    int digit3 = rand() % 10;     
    int randomNumber = digit1 * 100 + digit2 * 10 + digit3;
    std::cout << "Random 3-digit number: " << randomNumber << std::endl;
    return 0;
}