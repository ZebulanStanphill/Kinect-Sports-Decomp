typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rows_8312C750 {
    __vector4 row[3];
} Rows_8312C750;

extern Rows_8312C750 lbl_8317F430;
extern Rows_8312C750 lbl_8323B470;

void fn_8312C750(void)
{
    lbl_8323B470.row[0] = lbl_8317F430.row[0];
    lbl_8323B470.row[1] = lbl_8317F430.row[1];
    lbl_8323B470.row[2] = lbl_8317F430.row[2];
}
