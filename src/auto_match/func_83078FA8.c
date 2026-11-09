typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct Matrix_83078598 { __vector4 r[4]; } Matrix_83078598;
typedef struct Vec_83078FA8 { __vector4 v; } Vec_83078FA8;

extern Matrix_83078598 fn_83078598(void *node);

Vec_83078FA8 fn_83078FA8(void *node)
{
    Vec_83078FA8 result;

    result.v = fn_83078598(node).r[3];
    return result;
}
