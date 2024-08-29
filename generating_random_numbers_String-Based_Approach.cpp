#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <string>
int main() {
    srand(static_cast<unsigned int>(time(0))); 
    std::string randomNumberStr;
    randomNumberStr += '1' + rand() % 9;   
    randomNumberStr += '0' + rand() % 10;  
    randomNumberStr += '0' + rand() % 10;  
    int randomNumber = std::stoi(randomNumberStr);
    std::cout << "Random 3-digit number: " << randomNumber << std::endl;
    return 0;
}