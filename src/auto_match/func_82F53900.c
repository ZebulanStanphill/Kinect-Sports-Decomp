typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_82F53900 {
    __vector4 v;
    char pad[0x40];
} Entry_82F53900;

void fn_82F53900(Entry_82F53900 *entries, int i, __vector4 v)
{
    entries[i].v = v;
}
