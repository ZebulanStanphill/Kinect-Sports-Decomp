typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct { __vector4 v; } Vec_8232BAF8;
typedef struct Data_8232BAF8 { char pad[0x90]; __vector4 v; } Data_8232BAF8;
typedef struct Obj_8232BAF8 { char pad[4]; Data_8232BAF8 *data; } Obj_8232BAF8;

Vec_8232BAF8 fn_8232BAF8(Obj_8232BAF8 *self)
{
    Vec_8232BAF8 r;
    r.v = self->data->v;
    return r;
}
