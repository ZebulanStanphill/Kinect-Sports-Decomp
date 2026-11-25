/* hkUFloat8 assignment from a float: a binary search of the 256-entry
 * float table (compared through the bits; all entries are positive). */
extern const int lbl_82131F88[256];

#define MIDDLE_82CE5458(lo, hi) ((const int *)(((unsigned int)(hi) >> 1) + ((unsigned int)(lo) >> 1)))

void fn_82CE5458(unsigned char *out, const int *value)
{
    int bits = *value;
    const int *lo = lbl_82131F88;
    const int *hi;
    const int *mid;
    int i;

    /* 0x3C23D70A = table[1] (0.01f) */
    if (bits < 0x3c23d70a) {
        *out = 0;
        return;
    }
    hi = lbl_82131F88 + 256;
    /* 0x4358CCCD = table[128] */
    if (bits > 0x4358cccd) {
        lo = lbl_82131F88 + 128;
    } else {
        hi = lbl_82131F88 + 128;
    }
    for (i = 0; i < 6; i++) {
        mid = MIDDLE_82CE5458(lo, hi);
        if (bits > *mid) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    mid = MIDDLE_82CE5458(lo, hi);
    if (bits > *mid && mid < lbl_82131F88 + 255) {
        mid++;
    }
    *out = (unsigned char)(mid - lbl_82131F88);
}
