#include "user_1.hpp"

#include "templated_wrapper.hpp"

#include <iostream>
#include <string>

namespace user_1 {
void use() {
    Templated<std::string> t{"user 1"};
    std::cout << t.get() << std::endl;
    Templated<std::string> t1;
    std::cout << t1.get() << std::endl;
}
} // namespace user_1
