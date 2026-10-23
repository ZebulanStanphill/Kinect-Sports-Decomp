extern float lbl_821CC160;
extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;
static float rnd(void)
{
    union { unsigned int i; float f; } value;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    value.i = lbl_83265A28 & 0x7fffff | 0x3f800000;
    return value.f - lbl_821CA45C[1];
}

void fn_8232D710(int param_1)
{
    float base = *(float *)(param_1 + 0x3c);
    float cur = *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = lbl_821CC160;
    *(float *)(param_1 + 0x48) = base + (cur - base) * rnd();
}
