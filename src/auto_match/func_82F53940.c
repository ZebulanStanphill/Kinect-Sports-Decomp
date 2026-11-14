typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_82F53940 {
    char pad0[0x20];
    __vector4 value; /* 0x20 */
    char pad30[0x20];
} Entry_82F53940;

void fn_82F53940(Entry_82F53940 *entries, int index, __vector4 value)
{
    entries[index].value = value;
}
