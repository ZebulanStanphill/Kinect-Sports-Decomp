typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct {
    __vector4 v;
} Vec_82445D90;

typedef struct Body_82445D90 {
    char pad0[0xd0];
    __vector4 pos;      /* 0xd0 */
} Body_82445D90;

typedef struct Holder_82445D90 {
    Body_82445D90 *body;
} Holder_82445D90;

typedef struct Target_82445D90 {
    char pad0[0x10];
    __vector4 pos;      /* 0x10 */
    char pad20[0x94 - 0x20];
    int attached;       /* 0x94 */
} Target_82445D90;

typedef struct Obj_82445D90 {
    int pad0;
    Holder_82445D90 *holder;  /* 0x04 */
    char pad8[0xc];
    Target_82445D90 *target;  /* 0x14 */
} Obj_82445D90;

Vec_82445D90 fn_82445D90(Obj_82445D90 *o)
{
    Vec_82445D90 r;

    if (o->target->attached == 0) {
        r.v = o->target->pos;
    } else {
        int body = (int)o->holder->body;

        if (body == 0)
            r.v = __VMXGetReg(77);
        else
            r.v = ((Body_82445D90 *)body)->pos;
    }
    return r;
}
