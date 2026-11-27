#include "xdk/vectorintrinsics.h"

#define VPACK_NORMSHORT2 1

extern __vector4 fn_830760D0(__vector4 q, __vector4 v);
extern const float lbl_8201DFF8;
extern const float lbl_82196080;
extern float fn_8306ED98(__vector4 a, __vector4 b);
extern float fn_8306E9B8(float x);
extern __vector4 fn_8306ED78(__vector4 a, __vector4 b);
extern __vector4 fn_8306EDB0(__vector4 v);
extern __vector4 fn_8306EDE8(__vector4 v);
extern __vector4 fn_830763C8(__vector4 axis, float angle);

__vector4 fn_83076BE0(__vector4 from, __vector4 to)
{
    __vector4 rotated;
    float cosine;

    rotated = fn_830760D0(from, to);
    cosine = fn_8306ED98(to, rotated);
    if (cosine - 1.0f > lbl_8201DFF8) {
        return __vpermwi(__vupkd3d(__vspltisw(0), VPACK_NORMSHORT2), 171);
    }
    if (cosine + 1.0f < lbl_82196080) {
        return fn_830763C8(fn_8306EDE8(to), 3.14159265f);
    }
    return fn_830763C8(fn_8306EDB0(fn_8306ED78(to, rotated)), fn_8306E9B8(cosine));
}
