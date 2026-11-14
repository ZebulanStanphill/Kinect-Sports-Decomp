typedef struct Range_82B16FB0 {
    unsigned int flags;
    int pad4;
    double min;
    double max;
} Range_82B16FB0;

extern const double lbl_82005710;

int fn_82B16FB0(Range_82B16FB0 *r, unsigned char allowZero, double value, double *out)
{
    unsigned int flags = r->flags;

    if ((flags & 2) != 0)
        return 0;
    if ((flags & 4) != 0) {
        if (!allowZero)
            return 0;
        if (value > lbl_82005710 && (flags & 0x10) == 0)
            return 0;
        if (value < lbl_82005710 && (flags & 8) == 0)
            return 0;
        *out = lbl_82005710;
        return 1;
    }
    if (r->min != r->max)
        return 0;
    *out = r->min;
    return 1;
}
