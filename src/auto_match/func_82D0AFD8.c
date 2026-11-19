typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

extern __vector4 __vmulfp(__vector4 a, __vector4 b);
extern __vector4 __lvlx(const void *base, int offset);
extern __vector4 __vspltw(__vector4 value, unsigned int lane);

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

    out->columns[0][0] = squared.values[0] + 1.0f;
    out->columns[1][0] = direction->values[0] * scaled.values[1];
    out->columns[2][0] = direction->values[0] * scaled.values[2];
    out->columns[3][0] = direction->values[3] * scaled.values[0];

    out->columns[0][1] = out->columns[1][0];
    out->columns[1][1] = squared.values[1] + 1.0f;
    out->columns[2][1] = direction->values[1] * scaled.values[2];
    out->columns[3][1] = direction->values[3] * scaled.values[1];

    out->columns[0][2] = out->columns[2][0];
    out->columns[1][2] = out->columns[2][1];
    out->columns[2][2] = squared.values[2] + 1.0f;
    out->columns[3][2] = direction->values[3] * scaled.values[2];

    out->columns[0][3] = 0.0f;
    out->columns[1][3] = 0.0f;
    out->columns[2][3] = 0.0f;
    out->columns[3][3] = 1.0f;
}
