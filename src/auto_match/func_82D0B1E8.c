typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct { __vector4 v; } Vec_82D0B1E8;
typedef struct Data_82D0B1E8 { char pad[0xd0]; __vector4 v; } Data_82D0B1E8;
typedef struct Obj_82D0B1E8 { char pad[8]; Data_82D0B1E8 *data; } Obj_82D0B1E8;

Vec_82D0B1E8 fn_82D0B1E8(Obj_82D0B1E8 *self)
{
    Vec_82D0B1E8 r;
    r.v = self->data->v;
    return r;
}
