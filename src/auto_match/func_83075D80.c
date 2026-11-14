typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_83075D80 {
    __vector4 v;
    char pad[0x10];
} Entry_83075D80;

void fn_83075D80(Entry_83075D80 *entries, int i, __vector4 v)
{
    entries[i].v = v;
}
