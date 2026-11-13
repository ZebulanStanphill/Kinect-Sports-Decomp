typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Rows_8312C8D8 {
    __vector4 row[4];
} Rows_8312C8D8;

extern Rows_8312C8D8 lbl_8317F990;
extern Rows_8312C8D8 lbl_8323B530;

void fn_8312C8D8(void)
{
    lbl_8323B530.row[0] = lbl_8317F990.row[0];
    lbl_8323B530.row[1] = lbl_8317F990.row[1];
    lbl_8323B530.row[2] = lbl_8317F990.row[2];
    lbl_8323B530.row[3] = lbl_8317F990.row[3];
}
