typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct {
    __vector4 v;
} Vec_82447E60;

typedef struct {
    char pad[0x20];
    __vector4 v;
} Data_82447E60;

typedef struct {
    int f0;
    Data_82447E60 *data;
} Res_82447E60;

typedef struct {
    char pad[0x174];
    Res_82447E60 *res;
} Inner_82447E60;

typedef struct {
    char pad[0x40];
    Inner_82447E60 **inner;
} Obj_82447E60;

Vec_82447E60 fn_82447E60(Obj_82447E60 *o)
{
    Vec_82447E60 r;
    r.v = (*o->inner)->res->data->v;
    return r;
}
