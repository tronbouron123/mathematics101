#include <iostream>
int main() {
    int n = 5; // input number
    if (n > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (n == 0) {
        std::cout << "The number is zero." << std::endl;
    } else {
        std::cout << "The number is negative." << std::endl;
    }
    return 0;
}
