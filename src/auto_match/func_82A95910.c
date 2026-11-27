typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef union Permute_82A95910 {
    unsigned int words[8]; /* indexed by a 3-bit field; the vector is the first four */
    __vector4 vector;
} Permute_82A95910;

/* Builds the byte-permute control that moves source word i to the slot given by its 3-bit field. */
__vector4 fn_82A95910(int swizzle)
{
    Permute_82A95910 control;

    control.words[0] = control.words[1] = control.words[2] = control.words[3] = 0x10111213;
    control.words[(swizzle >> 18) & 7] = 0x00010203;
    control.words[(swizzle >> 21) & 7] = 0x04050607;
    control.words[(swizzle >> 24) & 7] = 0x08090a0b;
    control.words[(swizzle >> 27) & 7] = 0x0c0d0e0f;
    return control.vector;
}
