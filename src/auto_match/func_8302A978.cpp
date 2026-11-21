#include <cmath>

// The cube of a double, through the VC10 <cmath> pow(double, int) overload (inlined _Pow_int).
extern "C" float fn_8302A978(double x)
{
    return (float)std::pow(x, 3);
}
