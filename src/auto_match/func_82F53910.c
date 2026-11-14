typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_82F53910 {
    char pad0[0x40];
    __vector4 value; /* 0x40 */
} Entry_82F53910;

void fn_82F53910(Entry_82F53910 *entries, int index, __vector4 value)
{
    entries[index].value = value;
}
