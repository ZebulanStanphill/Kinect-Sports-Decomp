typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float scalar[4];
    unsigned int words[4];
} __vector4;

__vector4 __vspltw(__vector4 value, unsigned int lane);

void fn_82D8E7F8(char *self, float size)
{
    __vector4 *minimum = (__vector4 *)(self + 0x30);
    __vector4 *maximum = (__vector4 *)(self + 0x40);
    minimum->scalar[0] = size * -0.5f;
    *minimum = __vspltw(*minimum, 0);
    maximum->scalar[0] = size * 0.5f;
    *maximum = __vspltw(*maximum, 0);
}
