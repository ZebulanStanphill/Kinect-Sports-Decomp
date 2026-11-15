extern float lbl_821CA45C[2];
extern unsigned int lbl_83265A28;
extern void fn_824651F0(void *, unsigned int *);

static __forceinline float RandomValue(void)
{
    union {
        unsigned int bits;
        float value;
    } random;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return random.value - lbl_821CA45C[1];
}

void fn_82465298(char *self, const unsigned int *value, float minimum, float maximum, float duration,
                 int enabled)
{
    unsigned int copied = *value;
    *(float *)(self + 0x30) = minimum;
    *(float *)(self + 0x34) = maximum;
    *(float *)(self + 0x38) = duration;
    *(unsigned int *)(self + 0x28) = copied;
    *(float *)(self + 0x2c) = minimum + (maximum - minimum) * RandomValue();
    if (enabled != 0) {
        fn_824651F0(self, (unsigned int *)(self + 0x28));
    }
}
