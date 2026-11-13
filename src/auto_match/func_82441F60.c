typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct {
    __vector4 v;
} Vec_82441F60;

typedef struct Body_82441F60 {
    char pad0[0xd0];
    __vector4 pos;      /* 0xd0 */
} Body_82441F60;

typedef struct Holder_82441F60 {
    Body_82441F60 *body;
} Holder_82441F60;

typedef struct Obj_82441F60 {
    int pad0;
    Holder_82441F60 *holder;  /* 0x04 */
} Obj_82441F60;

Vec_82441F60 fn_82441F60(Obj_82441F60 *o)
{
    Vec_82441F60 r;
    int body = (int)o->holder->body;

    if (body == 0)
        r.v = __VMXGetReg(77);
    else
        r.v = ((Body_82441F60 *)body)->pos;
    return r;
}
