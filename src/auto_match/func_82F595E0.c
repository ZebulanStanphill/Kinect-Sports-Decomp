typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct {
    union {
        __vector4 r[4];
        float m[4][4];
    };
} XMMATRIX;

extern XMMATRIX lbl_83262820;

XMMATRIX fn_82F595E0(__vector4 x, __vector4 y, __vector4 z)
{
    XMMATRIX m = lbl_83262820;
    m.m[0][0] = x.vector4_f32[0];
    m.m[0][1] = x.vector4_f32[1];
    m.m[0][2] = x.vector4_f32[2];
    m.m[1][0] = y.vector4_f32[0];
    m.m[1][1] = y.vector4_f32[1];
    m.m[1][2] = y.vector4_f32[2];
    m.m[2][0] = z.vector4_f32[0];
    m.m[2][1] = z.vector4_f32[1];
    m.m[2][2] = z.vector4_f32[2];
    return m;
}
