// Virtual method (vtable lbl_821B8B38) that fills four outputs: 8, the word at obj+0x20,
// 0 and 0.0f. self, a and b are unused.

void fn_82428A10(void *self, char *obj, int a, int b, int *out0, int *out1, int *out2,
                 float *out3)
{
    float f;

    *out0 = 8;
    *out1 = *(int *)(obj + 0x20);
    f = 0.0f;
    *out2 = 0;
    *out3 = f;
}
