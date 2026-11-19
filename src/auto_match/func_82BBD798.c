extern float lbl_82015BD4;
extern float lbl_820885F0;

int fn_82BBD798(float value)
{
    int exponentShift;

    union {
        float f;
        int i;
    } bits;

    if (value >= lbl_82015BD4) {
        return 0x7fffffe;
    }
    if (value <= lbl_820885F0) {
        return 0x8000000;
    }
    bits.f = value;
    exponentShift = 0x81 - ((bits.i >> 23) & 0xff);
    if (exponentShift > 15) {
        exponentShift = 15;
    }
    return ((((int)((float)((__int64)1 << (exponentShift + 25)) * value) + 1) >> 1) & 0xfffffff) +
           exponentShift * 0x10000000;
}
