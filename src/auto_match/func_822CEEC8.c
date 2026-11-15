extern double __fctid(double);
extern double __fcfid(double);
extern const double lbl_821954B0[325];
extern float lbl_831E4E38;

int fn_822CEEC8(int self)
{
    int *entries = *(int **)(self + 0x1c);
    float value =
        *(float *)(*(int *)(entries[0] + entries[4] * 4) + 0x14) * *(const float *)&lbl_821954B0[28];
    float rounded = (float)__fcfid(__fctid((double)value - lbl_821954B0[29]));
    if ((float)(((double)value - rounded) * lbl_821954B0[30]) < lbl_831E4E38) {
        return 1;
    }
    return 0;
}
