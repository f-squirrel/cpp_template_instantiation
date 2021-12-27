#include <iostream>

#include "templated_wrapper.hpp"
#include "user_1.hpp"
#include "user_2.hpp"

int main() {
    Templated<std::string> t{"main"};
    std::cout << t.get() << std::endl;

    user_1::use();
    user_2::use();
    return 0;
}
