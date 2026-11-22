/* Decides from the current distance band whether an event happens (always near, by chance in between). */
extern float fn_822CF9D8(void);
extern unsigned int lbl_83265A28;

static __forceinline float RandomUnit(void)
{
    union {
        unsigned int bits;
        float value;
    } u;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    u.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return u.value - 1.0f;
}

int fn_822CFA98(void)
{
    float distance = fn_822CF9D8();
    unsigned int band;

    if (distance > 0.7f) {
        band = 0;
    } else if (distance > 0.4f) {
        band = 1;
    } else {
        band = 2;
    }
    switch (band) {
    case 0:
        return 1;
    case 1:
        return RandomUnit() > 0.5f;
    }
    return 0;
}
