#pragma once

#include "template.hpp"

#if (USE_EXTERN == 2)

#include <string>

#pragma message("Using Extern Instantiation")
extern template class Templated<std::string>;

#elif (USE_EXTERN == 1)

#include <string>

#pragma message("Using Regular Instantiation")
template class Templated<std::string>;

#else
#pragma message("No Instantiation")
#endif
