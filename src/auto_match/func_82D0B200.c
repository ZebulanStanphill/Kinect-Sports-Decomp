typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct { __vector4 v; } Vec_82D0B200;
typedef struct Data_82D0B200 { char pad[0xe0]; __vector4 v; } Data_82D0B200;
typedef struct Obj_82D0B200 { char pad[8]; Data_82D0B200 *data; } Obj_82D0B200;

Vec_82D0B200 fn_82D0B200(Obj_82D0B200 *self)
{
    Vec_82D0B200 r;
    r.v = self->data->v;
    return r;
}
