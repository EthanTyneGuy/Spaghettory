#include <iostream>

int main() {
    //we printin
    for (int i = 0; i < 11; ++i) {
        std::cout << i << ",";
    }
    std::cout << std::endl;

    //print 2 electro boogaloo
    for (int i = 0; i < 11; ++i) {
        std::cout << (i * 2) << ",";
    }
    std::cout << std::endl;

    //printen
    for (int i = 0; i < 11; ++i) {
        std::cout << (i * 10) << ",";
    }
    std::cout << std::endl;

    return 0;
}