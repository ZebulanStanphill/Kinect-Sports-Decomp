extern void fn_828105C8(float *v, float x, float y, float z);
extern float lbl_82005C8C;

void fn_83067128(float *box)
{
    fn_828105C8(box, 3.402823466e+38f, 3.402823466e+38f, 3.402823466e+38f);
    fn_828105C8(box + 3, lbl_82005C8C, lbl_82005C8C, lbl_82005C8C);
}
