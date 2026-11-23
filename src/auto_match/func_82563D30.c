extern unsigned int lbl_83265A28;

static __forceinline float RandomBits(void)
{
    union {
        unsigned int u;
        float f;
    } bits;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    bits.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return bits.f;
}

static __forceinline float RandomRange(float lo, float hi)
{
    return lo + (hi - lo) * (RandomBits() - 1.0f);
}

void fn_82563D30(float *out, const float *lo, const float *hi)
{
    out[0] = RandomRange(lo[0], hi[0]);
    out[1] = RandomRange(lo[1], hi[1]);
    out[2] = RandomRange(lo[2], hi[2]);
}
