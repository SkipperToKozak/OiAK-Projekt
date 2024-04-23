#include <iostream>
#include "Montgomery.cpp"
#include "Montgomery2.cpp"
int main() {
    int a,b;
    std::cout << "Hello, World!" << std::endl;
    std::cin >> a;
    std::cin >> b;
    Montgomery montgomery(7);
    Montgomery2 montgomery2(7);
    std::cout << "Mnozenie algorithmica: " << montgomery.transform( montgomery.multiply(a,b)) << std::endl;
    std::cout << "Mbnozenie cp alghorithms: " << (int)montgomery2.init(montgomery2.mult(a,b)) << std::endl;
    return 0;
}
