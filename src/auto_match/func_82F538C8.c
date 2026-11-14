typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec_82F538C8 {
    __vector4 v;
} Vec_82F538C8;

typedef struct Entry_82F538C8 {
    __vector4 v0;
    __vector4 v1;
    __vector4 v2;
    __vector4 v3;
    __vector4 v4;
} Entry_82F538C8;

Vec_82F538C8 fn_82F538C8(Entry_82F538C8 *entries, int index)
{
    Vec_82F538C8 r;
    r.v = entries[index].v2;
    return r;
}
