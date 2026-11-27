#include "xdk/vectorintrinsics.h"

typedef struct Matrix4_82D0AFD8 {
    float columns[4][4]; /* columns[c][r] */
} Matrix4_82D0AFD8;

static __forceinline __vector4 Broadcast_82D0AFD8(float value)
{
    return __vspltw(__lvlx(&value, 0), 0);
}

void fn_82D0AFD8(const __vector4 *direction, float scale, Matrix4_82D0AFD8 *out)
{
    __vector4 factor;
    __vector4 scaled;
    __vector4 squared;

    factor = Broadcast_82D0AFD8(scale - 1.0f);
    scaled = __vmulfp(*direction, factor);
    squared = __vmulfp(__vmulfp(*direction, *direction), factor);

    out->columns[0][0] = squared.vector4_f32[0] + 1.0f;
    out->columns[1][0] = direction->vector4_f32[0] * scaled.vector4_f32[1];
    out->columns[2][0] = direction->vector4_f32[0] * scaled.vector4_f32[2];
    out->columns[3][0] = direction->vector4_f32[3] * scaled.vector4_f32[0];

    out->columns[0][1] = out->columns[1][0];
    out->columns[1][1] = squared.vector4_f32[1] + 1.0f;
    out->columns[2][1] = direction->vector4_f32[1] * scaled.vector4_f32[2];
    out->columns[3][1] = direction->vector4_f32[3] * scaled.vector4_f32[1];

    out->columns[0][2] = out->columns[2][0];
    out->columns[1][2] = out->columns[2][1];
    out->columns[2][2] = squared.vector4_f32[2] + 1.0f;
    out->columns[3][2] = direction->vector4_f32[3] * scaled.vector4_f32[2];

    out->columns[0][3] = 0.0f;
    out->columns[1][3] = 0.0f;
    out->columns[2][3] = 0.0f;
    out->columns[3][3] = 1.0f;
}
