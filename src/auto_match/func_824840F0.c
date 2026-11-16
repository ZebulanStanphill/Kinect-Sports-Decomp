typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float values[4];
} __vector4;

extern __vector4 __VMXGetReg(int number);

struct State_824840F0 {
    char padding[0x250];
    char *active; /* 0x250 */
};
extern struct State_824840F0 lbl_83296890;
extern const float lbl_821CA45C[2];

void fn_824840F0(void *self, __vector4 *first, __vector4 *second, float *value, float *weight)
{
    __vector4 vector;
    if (lbl_83296890.active != 0) {
        vector = *(const __vector4 *)(lbl_83296890.active + 0x10);
    } else {
        vector = __VMXGetReg(77);
    }
    *first = vector;
    if (lbl_83296890.active != 0) {
        vector = *(const __vector4 *)(lbl_83296890.active + 0x30);
    } else {
        vector = __VMXGetReg(77);
    }
    *second = vector;
    if (lbl_83296890.active != 0) {
        *value = *(float *)(lbl_83296890.active + 0x60);
    } else {
        *value = 0.0f;
    }
    *weight = lbl_821CA45C[1];
}
