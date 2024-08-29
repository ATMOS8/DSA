#include <iostream>
#include <cstdlib>  
#include <ctime>    
int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int randomNumber = 100 + rand() % 900;
    std::cout << "Random 3-digit number: " << randomNumber << std::endl;
    return 0;
}