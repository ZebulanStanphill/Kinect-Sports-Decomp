typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct {
    __vector4 v;
} Vec_82406710;

typedef struct {
    char pad[0x2c];
    int flag;
    __vector4 a;
    __vector4 b;
} Obj_82406710;

Vec_82406710 fn_82406710(Obj_82406710 *o)
{
    Vec_82406710 r;
    r.v = o->flag != 0 ? o->a : o->b;
    return r;
}
