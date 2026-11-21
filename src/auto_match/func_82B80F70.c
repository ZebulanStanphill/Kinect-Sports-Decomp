typedef union FloatBits_82B80F70 {
    unsigned int bits;
    float value;
} FloatBits_82B80F70;

int fn_82B80F70(unsigned int flags, double *low, double *high)
{
    FloatBits_82B80F70 infinity;

    if ((flags & 3) == 0) {
        return 0;
    }
    if (flags & 1) {
        if (flags & 2) {
            *low = 0.0;
            *high = 0.0;
        } else {
            infinity.bits = 0xff800000;
            *low = infinity.value;
            *high = 0.0;
        }
    } else {
        infinity.bits = 0x7f800000;
        *low = 0.0;
        *high = infinity.value;
    }
    return 1;
}
