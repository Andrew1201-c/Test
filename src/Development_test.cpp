#include <iostream>
#include "Development.h"

int main(void) {
    if(Dev::OnDevelopment()) {
       std::cout << "Hello, World!";
    }
    return 0;
}