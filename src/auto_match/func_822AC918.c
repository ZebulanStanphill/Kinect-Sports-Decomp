typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);

typedef struct Obj_822AC918 {
    int pad[2];
    void *inner;
} Obj_822AC918;

extern __vector4 lbl_82196750;
extern int fn_822AC9A8(Obj_822AC918 *self, void *inner, void *a, __vector4 *out1, __vector4 *out2);

int fn_822AC918(Obj_822AC918 *self, void *a, __vector4 *out1, __vector4 *out2)
{
    if (self->inner != 0 && fn_822AC9A8(self, self->inner, a, out1, out2) != 0) {
        return 1;
    }
    if (out1 != 0) {
        *out1 = __VMXGetReg(77);
    }
    if (out2 != 0) {
        *out2 = lbl_82196750;
    }
    return 0;
}
