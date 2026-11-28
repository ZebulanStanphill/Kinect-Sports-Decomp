typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Vec_822C4448 {
    __vector4 v;

    __forceinline Vec_822C4448()
    {
    }

    __forceinline Vec_822C4448(__vector4 value) : v(value)
    {
    }
};

struct Body_822C4448 {
    char pad0[0x130];
    __vector4 pos; /* 0x130 */
    char pad140[0x20];
    int active; /* 0x160 */
};

struct Obj_822C4448 {
    char pad0[0x24];
    Body_822C4448 *body; /* 0x24 */
    char pad28[0x58];
    __vector4 pos; /* 0x80 */
};

extern "C" {
Vec_822C4448 fn_822C40E8(Obj_822C4448 *o, int a, int b, __vector4 pos);
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, int index);
__vector4 __vxor(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int index);
__vector4 __vmaddfp(__vector4 a, __vector4 b, __vector4 c);
extern const float lbl_82192438[44];
extern const __vector4 lbl_82196750;
}

extern "C" void fn_82314140(int, int mode, int, Obj_822C4448 *obj, __vector4 *position, int *status,
                            __vector4 *direction, int *valid)
{
    Body_822C4448 *body = obj->body;
    __vector4 origin;
    if (body != 0 && body->active != 0)
        origin = body->pos;
    else
        origin = obj->pos;
    Vec_822C4448 delta = fn_822C40E8(obj, mode, 0, origin);
    __vector4 scale = __vspltw(__lvlx(&lbl_82192438[18], 0), 0);
    *position = __vmaddfp(__vxor(delta.v, __VMXGetReg(65)), scale, origin);
    *direction = lbl_82196750;
    *status = 0;
    *valid = 1;
}
