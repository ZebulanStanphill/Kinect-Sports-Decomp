// Sets the object's uniform scale: stores it, builds the scaled extent (vector at +0x20 times
// the replicated scale), rebuilds the 4x4 matrix at +0x60 from it (fn_8307D500, an XNA Math
// XMMatrixScalingFromVector shape) and refreshes the dependent state (fn_83078738).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __vmulfp(__vector4 a, __vector4 b);

struct Matrix_83078F10 {
    __vector4 r[4];

    __forceinline Matrix_83078F10 &operator=(const Matrix_83078F10 &m)
    {
        r[0] = m.r[0];
        r[1] = m.r[1];
        r[2] = m.r[2];
        r[3] = m.r[3];
        return *this;
    }
};

struct Obj_83078F10 {
    char pad00[0x20];
    __vector4 extent;           // 0x20
    int pad30;
    float scale;                // 0x34
    char pad38[0x28];
    Matrix_83078F10 matrix;     // 0x60
};

extern "C" Matrix_83078F10 fn_8307D500(__vector4 v);
extern "C" void fn_83078738(Obj_83078F10 *self);

extern "C" void fn_83078F10(Obj_83078F10 *self, float scale)
{
    __vector4 s;

    self->scale = scale;
    s.vector4_f32[3] = scale;
    s.vector4_f32[2] = scale;
    s.vector4_f32[1] = scale;
    s.vector4_f32[0] = scale;
    self->matrix = fn_8307D500(__vmulfp(self->extent, s));
    fn_83078738(self);
}
