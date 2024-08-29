#include <iostream>
int main() {
    int n, k;
    std::cout << "Enter an integer (n): ";
    std::cin >> n;
    std::cout << "Enter the bit position (k) to set/clear (0-based index): ";
    std::cin >> k;
    // Display original number
    std::cout << "Original number: " << n << std::endl;
    // Set the k-th bit
    int setBitNumber = n | (1 << k);
    std::cout << "Number after setting the " << k << "-th bit: " << setBitNumber << std::endl;
    // Clear the k-th bit
    int clearBitNumber = n & ~(1 << k);
    std::cout << "Number after clearing the " << k << "-th bit: " << clearBitNumber << std::endl;
    return 0;
}