typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rows_8312C1F0 {
    __vector4 row[4];
} Rows_8312C1F0;

extern Rows_8312C1F0 lbl_8317EFF0;
extern Rows_8312C1F0 lbl_8323B1D0;

void fn_8312C1F0(void)
{
    lbl_8323B1D0.row[0] = lbl_8317EFF0.row[0];
    lbl_8323B1D0.row[1] = lbl_8317EFF0.row[1];
    lbl_8323B1D0.row[2] = lbl_8317EFF0.row[2];
    lbl_8323B1D0.row[3] = lbl_8317EFF0.row[3];
}
