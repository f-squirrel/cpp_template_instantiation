#include "user_2.hpp"

#include "templated_wrapper.hpp"

#include <iostream>
#include <string>

namespace user_2 {
void use() {
    Templated<std::string> t{"user 2"};
    std::cout << t.get() << std::endl;
}
} // namespace user_2
