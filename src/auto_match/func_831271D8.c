typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Constants_831271D8 {
    __vector4 v[5];
    int unk50[2];
} Constants_831271D8;

extern Constants_831271D8 lbl_83297140;

void fn_831271D8(void)
{
    lbl_83297140.v[0] = __VMXGetReg(77);
    lbl_83297140.v[1] = __VMXGetReg(73);
    lbl_83297140.v[2] = __VMXGetReg(70);
    lbl_83297140.v[3] = __VMXGetReg(71);
    lbl_83297140.v[4] = __VMXGetReg(68);
}
