#include <iostream>
#include "divide.h"
int main() {
    std::cout << divide(10, 5) << std::endl;
    std::cout << divide(10, -5) << std::endl;
    std::cout << divide(1, 2) << std::endl;
    std::cout << divide(500000, 2) << std::endl;
    return 0;
}
