typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct { __vector4 v; } Vec_82F50E10;
typedef struct Data_82F50E10 { char pad[0x7e0]; __vector4 v; } Data_82F50E10;
typedef struct Obj_82F50E10 { char pad[4]; Data_82F50E10 *data; } Obj_82F50E10;

Vec_82F50E10 fn_82F50E10(Obj_82F50E10 *self)
{
    Vec_82F50E10 r;
    r.v = self->data->v;
    return r;
}
