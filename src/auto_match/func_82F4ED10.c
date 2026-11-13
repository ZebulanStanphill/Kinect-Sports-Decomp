typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82F4ED10 {
    char pad0[0xcb1];
    unsigned char flipped;
} Obj_82F4ED10;

extern __vector4 fn_82F534D8(float x, float y, float z, float w);

__vector4 *fn_82F4ED10(__vector4 *out, Obj_82F4ED10 *o)
{
    *out = fn_82F534D8(o->flipped ? -1.0f : 1.0f, 1.0f, 1.0f, 0.0f);
    return out;
}
