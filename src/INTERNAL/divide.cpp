#include "mathOp.h"

// Necessary headers are included using the precompiled headers generated by cmake

double mathOp::Arithmetic::divide(int a, int b)
{
    fmt::print("Division for a = {} and b = {}\n", a, b);
    if(b == 0)
    {
        throw std::invalid_argument("Denominator cannot be 0 during division!\n");
    }

    return static_cast<double>(a)/static_cast<double>(b);
}
