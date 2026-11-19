typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float f[4];
} __vector4;

typedef union Splat_82C8B9D8 {
    unsigned int words[4];
    __vector4 vector;
} Splat_82C8B9D8;

__vector4 __vsplth(__vector4 v, unsigned int i);

void fn_82C8B9D8(short *coefficients, __vector4 *rows)
{
    Splat_82C8B9D8 dc;
    __vector4 value;
    int dcValue = coefficients[0];

    dcValue = dcValue + ((dcValue + 1) >> 1);
    dc.words[0] = (unsigned short)((dcValue * 3 + 0x10) >> 5);
    value = __vsplth(dc.vector, 1);
    rows[0] = value;
    rows[1] = value;
    rows[2] = value;
    rows[3] = value;
    rows[4] = value;
    rows[5] = value;
    rows[6] = value;
    rows[7] = value;
}
