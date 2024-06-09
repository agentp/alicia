#include <iostream>
#include <test.h>

int main(int, char**) {
    std::string helloJim = generateHelloString("Pankaj Deshpande");
    std::cout << helloJim << std::endl;

    return 0;
}
