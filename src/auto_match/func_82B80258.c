extern int fn_82F6E018(double value);

static __forceinline float QuietNaN(void)
{
    union {
        unsigned int bits;
        float value;
    } result;

    result.bits = 0xffc00000;
    return result.value;
}

float fn_82B80258(float value)
{
    switch (fn_82F6E018(value)) {
    case 1:
    case 2:
        return QuietNaN();
    case 4:
    case 0x10:
    case 0x20:
    case 0x40:
    case 0x80:
        return 0.0f;
    case 0x200:
        return 1.0f;
    }
    if (value < 0.0f) {
        value = 0.0f;
    } else if (value > 1.0f) {
        value = 1.0f;
    }
    return value;
}
