#include "havok/hkBaseTypes.h"
#include <math.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
extern "C" {
__vector4 __vmsum4fp(__vector4, __vector4);
void __stvewx(__vector4, void *, int);
hkBool fn_82CE4F10(const __vector4 *v);
extern const float lbl_82006848;
}

/* hkQuaternion-style isOk(): finite components and unit length. */
extern "C" hkBool fn_82CE5710(const __vector4 *v)
{
    hkBool ok = fn_82CE4F10(v);
    float lengthSquared;
    __stvewx(__vmsum4fp(*v, *v), &lengthSquared, 0);
    hkBool normalized = fabs(lengthSquared - 1.0f) < lbl_82006848;
    ok = ok && normalized;
    return ok;
}
