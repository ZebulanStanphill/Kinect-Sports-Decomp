typedef struct Settings_8285F508 {
    char pad0[0x10];
    unsigned int kind;                      /* 0x10 */
    unsigned char mask[0xc];                /* 0x14 */
    float scale;                            /* 0x20 */
    float low[3];                           /* 0x24 */
    float high[3];                          /* 0x30 */
} Settings_8285F508;

extern Settings_8285F508 lbl_832115D0;

extern int fn_827EB2B0(int target, unsigned char *bits, unsigned char *mask, float scale, unsigned char *format);
extern int fn_827EB518(int target, unsigned char *bits, float *low, float *high, unsigned char *format);

int fn_8285F508(int target, unsigned char *bits, unsigned char *format)
{
    switch (lbl_832115D0.kind) {
    case 0:
        return fn_827EB2B0(target, bits, lbl_832115D0.mask, lbl_832115D0.scale, format);
    case 1:
        return fn_827EB518(target, bits, lbl_832115D0.low, lbl_832115D0.high, format);
    }
    return 2;
}
