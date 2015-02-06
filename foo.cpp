#include <iostream>
#include "foo.h"

void CppFoo::Bar(void) {
    std::cout << this->a << std::endl;
}
void CppFoo::Test() {
    std::cout << 4 << std::endl;
}
