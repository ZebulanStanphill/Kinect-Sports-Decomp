typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_83075D30 {
    __vector4 v;
    char pad[0x10];
} Entry_83075D30;

void fn_83075D30(__vector4 *out, Entry_83075D30 *entries, int i)
{
    *out = entries[i].v;
}
