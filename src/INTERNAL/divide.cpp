#include "mathOp.h"

#include <stdexcept>
#include <limits>

#define FMT_HEADER_ONLY
#include "fmt/format.h"


double mathOp::divide(int a, int b)
{
    fmt::print("Division for a = {} and b = {}\n", a, b);
    if(b == 0)
    {
        throw std::invalid_argument("Denominator cannot be 0 during division!\n");
    }

    return static_cast<double>(a)/static_cast<double>(b);
}
