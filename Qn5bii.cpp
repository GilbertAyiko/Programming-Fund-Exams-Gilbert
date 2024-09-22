#include <iostream>

int main() {
    std::cout << "multiples of 3 from 1 up to 20:" << std::endl;
    int i = 1;
    // While loop to print multiples of 3 from 1 to 20
    while (i <= 20) {
        if (i % 3 == 0) {
            std::cout << i << std::endl;
        }
        ++i; // Increment i
    }
    return 0;
}
