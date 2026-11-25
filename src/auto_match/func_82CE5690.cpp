#include "havok/hkVector4.h"

extern "C" {
double sin(double x);           // sin
double cos(double x);           // cos
}

class hkQuaternion {
public:
    hkVector4 m_vec;
};

extern "C" void fn_82CE5690(hkQuaternion *self, const hkVector4 &axis, float angle)
{
    float halfAngle = 0.5f * angle;
    float sinHalf = (float)sin(halfAngle);
    self->m_vec.setMul4(sinHalf, axis);
    self->m_vec(3) = (float)cos(halfAngle);
}
