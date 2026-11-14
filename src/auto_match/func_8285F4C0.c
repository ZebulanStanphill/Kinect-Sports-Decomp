typedef struct Settings_8285F4C0 {
    char pad0[0x10];
    unsigned int kind;                      /* 0x10 */
    unsigned char mask[0xc];                /* 0x14 */
    float scale;                            /* 0x20 */
    float low[3];                           /* 0x24 */
    float high[3];                          /* 0x30 */
} Settings_8285F4C0;

extern Settings_8285F4C0 lbl_832115D0;

extern int fn_827EB1A8(int target, unsigned char flag, unsigned char *bits, unsigned char *mask, float scale, unsigned char *format);
extern int fn_827EB3B8(int target, unsigned char flag, unsigned char *bits, float *low, float *high, unsigned char *format);

int fn_8285F4C0(int target, int flag, unsigned char *bits, unsigned char *format)
{
    switch (lbl_832115D0.kind) {
    case 0:
        return fn_827EB1A8(target, flag, bits, lbl_832115D0.mask, lbl_832115D0.scale, format);
    case 1:
        return fn_827EB3B8(target, flag, bits, lbl_832115D0.low, lbl_832115D0.high, format);
    }
    return 0;
}
