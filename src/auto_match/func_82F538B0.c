typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec_82F538B0 {
    __vector4 v;
} Vec_82F538B0;

typedef struct Entry_82F538B0 {
    __vector4 v0;
    __vector4 v1;
    __vector4 v2;
    __vector4 v3;
    __vector4 v4;
} Entry_82F538B0;

Vec_82F538B0 fn_82F538B0(Entry_82F538B0 *entries, int index)
{
    Vec_82F538B0 r;
    r.v = entries[index].v1;
    return r;
}
