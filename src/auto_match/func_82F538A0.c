typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_82F538A0 {
    __vector4 v;
    char pad[0x40];
} Entry_82F538A0;

void fn_82F538A0(__vector4 *out, Entry_82F538A0 *entries, int i)
{
    *out = entries[i].v;
}
