typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Vec_822C4448 {
    __vector4 v;
    __forceinline Vec_822C4448() {}
    __forceinline Vec_822C4448(__vector4 x) : v(x) {}
};

struct Body_822C4448 {
    char pad0[0x130];
    __vector4 pos;      /* 0x130 */
    char pad140[0x20];
    int active;         /* 0x160 */
};

struct Obj_822C4448 {
    char pad0[0x24];
    Body_822C4448 *body;    /* 0x24 */
};

extern "C" Vec_822C4448 fn_822B6908(Obj_822C4448 *o);
extern "C" Vec_822C4448 fn_822C40E8(Obj_822C4448 *o, int a, int b, __vector4 pos);

extern "C" Vec_822C4448 fn_822C4448(Obj_822C4448 *o, int a, int b, unsigned char useBody)
{
    Body_822C4448 *body = o->body;
    return fn_822C40E8(o, a, b, ((body != 0 && useBody && body->active != 0) ? Vec_822C4448(body->pos) : fn_822B6908(o)).v);
}
