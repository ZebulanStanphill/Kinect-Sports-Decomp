// Havok: true (0x80, the "all elements equal" CR6 bit) when every bit set in *b is also
// set in *a, tested as (~b | a) == all ones.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vnor(__vector4 a, __vector4 b);
__vector4 __vcmpequwR(__vector4 a, __vector4 b, unsigned int *cr);

unsigned int fn_82DCC738(const __vector4 *a, const __vector4 *b)
{
    unsigned int cr;

    __vcmpequwR(__vor(__vnor(*b, *b), *a), __vspltisw(-1), &cr);
    return cr & 0x80;
}
