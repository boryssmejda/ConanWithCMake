#include "mathOp.h"

// Necessary headers are included using the precompiled headers generated by cmake

namespace
{
    bool wouldOverflow(int a, int b)
    {
        const int MAX_INT = std::numeric_limits<int>::max();
        const int MIN_INT = std::numeric_limits<int>::min();

        if(a == -1 && b == MIN_INT)
        {
            return true;
        }
        else if(a == MIN_INT && b == -1)
        {
            return true;
        }

        if(a > static_cast<double>(MAX_INT)/b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool wouldUnderflow(int a, int b)
    {
        const int MIN_INT = std::numeric_limits<int>::min();

        if(a < static_cast<double>(MIN_INT)/b)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int mathOp::Arithmetic::multiply(int a, int b)
{
    fmt::print("Multiplication for a = {} and b = {}\n", a, b);

    if(a == 0 || b == 0)
    {
        return 0;
    }

    if(wouldOverflow(a, b))
    {
        throw std::invalid_argument("Multiplication would result in integer overflow!\n");
    }
    else if(wouldUnderflow(a, b))
    {
        throw std::invalid_argument("Multiplication would result in integer underflow!\n");
    }
    else
    {
        return a * b;
    }
}