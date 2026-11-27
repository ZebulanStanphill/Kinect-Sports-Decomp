#include "xdk/vectorintrinsics.h"

typedef struct Matrix_82F59A20 {
    __vector4 r[4];
} Matrix_82F59A20;

extern Matrix_82F59A20 lbl_83262820;

extern float fn_82F53608(__vector4 a, __vector4 b);
extern __vector4 fn_82F53528(__vector4 a, __vector4 b);
extern __vector4 fn_82F53548(__vector4 v);
extern Matrix_82F59A20 *fn_8234E338(Matrix_82F59A20 *result, __vector4 axis, float angle);

Matrix_82F59A20 *fn_82F59A20(Matrix_82F59A20 *result, __vector4 from, __vector4 to)
{
    float angle;

    angle = fn_82F53608(from, to);
    if (angle * 57.29578f >= 0.1f) {
        fn_8234E338(result, fn_82F53548(fn_82F53528(from, to)), angle);
    } else {
        *result = lbl_83262820;
    }
    return result;
}
