typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82F5E778 {
    __vector4 v;
    float w;
} Obj_82F5E778;

extern __vector4 fn_82F534D8(float x, float y, float z, float w);

Obj_82F5E778 *fn_82F5E778(Obj_82F5E778 *self, float x, float y, float z, float w)
{
    self->v = fn_82F534D8(x, y, z, 0.0f);
    self->w = w;
    return self;
}
