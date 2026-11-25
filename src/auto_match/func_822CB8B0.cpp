#include <algorithm>
#include <math.h>

struct Vector3_822CB8B0 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
};

extern "C" void fn_8223C200(void *writer, unsigned char bit, int flags);
extern "C" void fn_8223C478(void *writer, int bits, int flags);
extern "C" int fn_828E9F18(void *writer, unsigned __int64 value, int bits);
extern "C" unsigned char fn_8287C3E8(float value);
extern "C" double fn_82F65018(double y, double x);
extern "C" float lbl_831D142C;

static __forceinline float GetX(Vector3_822CB8B0 v)
{
    return v.x;
}

static __forceinline float GetY(Vector3_822CB8B0 v)
{
    return v.y;
}

static __forceinline float GetZ(Vector3_822CB8B0 v)
{
    return v.z;
}

static __forceinline unsigned __int64 IntSqrt(unsigned __int64 n)
{
    return (unsigned __int64)sqrt((double)n);
}

static __forceinline double Hypot(double a, double b)
{
    return sqrt(a * a + b * b);
}

extern "C" void fn_822CB8B0(void *writer, const Vector3_822CB8B0 *direction)
{
    static const unsigned __int64 kSide = IntSqrt(0x4000);
    static const unsigned __int64 kCount = kSide * kSide;
    float z = GetZ(*direction);
    float y = GetY(*direction);
    float x = GetX(*direction);
    unsigned char negative;
    double theta;
    double phi;
    unsigned __int64 row;
    unsigned __int64 columns;
    unsigned __int64 column;

    negative = 0;
    if (x < 0.0f) {
        x = -x;
        negative = 1;
    }
    fn_8223C200(writer, negative, 0);
    negative = 0;
    if (y < 0.0f) {
        y = -y;
        negative = 1;
    }
    fn_8223C200(writer, negative, 0);
    negative = 0;
    if (z < 0.0f) {
        z = -z;
        negative = 1;
    }
    fn_8223C200(writer, negative, 0);
    if (fn_8287C3E8(z) && fn_8287C3E8(x)) {
        theta = 0.0;
    } else {
        theta = fn_82F65018(z, x);
    }
    phi = fn_82F65018(y, Hypot(x, z));
    theta = theta / lbl_831D142C;
    row = (unsigned __int64)((1.0 - phi / lbl_831D142C) * kSide);
    row = std::min(row, kSide - 1);
    columns = row * 2 + 1;
    column = (unsigned __int64)(columns * theta);
    column = std::min(column, columns - 1);
    fn_8223C478(writer, 14, 0);
    fn_828E9F18(writer, row * row + column, 14);
}
