typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct { __vector4 v; } Vec4_824CC7E8;

typedef struct {
    void *vtable;
    Vec4_824CC7E8 (*get)(void *context);
    void *context;
} Getter_824CC7E8;
Vec4_824CC7E8 fn_824CC7E8(Getter_824CC7E8 *getter)
{
    Vec4_824CC7E8 r;
    r.v = getter->get(getter->context).v;
    return r;
}
