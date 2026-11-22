typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vpermwi(__vector4 v, unsigned int control);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);

extern float fn_8255A260(__vector4 a, __vector4 b);

static __forceinline __vector4 Cross(__vector4 v1, __vector4 v2)
{
    __vector4 result = __vmulfp(__vpermwi(v1, 99), __vpermwi(v2, 135));
    return __vnmsubfp(__vpermwi(v1, 135), __vpermwi(v2, 99), result);
}

/* Sorts the direction from `forward` to `target` into one of eight sectors:
   0 straight ahead, 4 behind, 1-3 on one side and 5-7 on the other. */
unsigned char fn_823CC7F0(__vector4 forward, __vector4 target)
{
    float angle;
    int left;
    unsigned char sector;
    __vector4 side;

    angle = fn_8255A260(target, forward);
    if (angle > 0.3926991f) {
        side = __vmsum3fp(target, Cross(__VMXGetReg(72), forward));
        left = side.vector4_f32[0] > 0.0f;
        if (angle < 1.1780972f) {
            sector = left ? 7 : 1;
        } else if (angle < 1.9634955f) {
            sector = left ? 6 : 2;
        } else if (angle < 2.7488937f) {
            sector = left ? 5 : 3;
        } else {
            sector = 4;
        }
    } else {
        sector = 0;
    }
    return sector;
}
