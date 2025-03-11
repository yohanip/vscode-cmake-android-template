#include <iostream>
#include <my_math.h>
#include "module1.h"
#include "module2.h"

int main() {
    int x = 5, y = 3;
    
    std::cout << "Addition: " << add(x, y) << std::endl;
    std::cout << "Multiplication: " << multiply(x, y) << std::endl;
    std::cout << "Square Root of 16: " << square_root(16) << std::endl;

    print_module1();
    print_module2();
    
    return 0;
}
