typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern "C" __vector4 __vsubfp(__vector4 a, __vector4 b);
extern "C" __vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

struct Vec_8307BA78 {
    __vector4 v;
    __forceinline Vec_8307BA78() {}
};
struct Nodes_8307BA78 { char pad[0x709c]; void *from; void *to; };
struct Obj_8307BA78 { char pad[0xb4]; Nodes_8307BA78 *nodes; };

extern "C" Vec_8307BA78 fn_83078FA8(void *node);
extern "C" float lbl_82186EA0;

extern "C" Vec_8307BA78 fn_8307BA78(Obj_8307BA78 *o)
{
    Vec_8307BA78 result;
    Vec_8307BA78 a = fn_83078FA8(o->nodes->from);
    Vec_8307BA78 b = fn_83078FA8(o->nodes->to);
    __vector4 t;
    t.vector4_f32[3] = lbl_82186EA0;
    t.vector4_f32[2] = lbl_82186EA0;
    t.vector4_f32[1] = lbl_82186EA0;
    t.vector4_f32[0] = lbl_82186EA0;
    result.v = __vmaddfp(__vsubfp(b.v, a.v), t, a.v);
    return result;
}
