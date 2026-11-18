typedef struct Entry_8285F548 {
    int pad0;
    int target;          /* 0x4 */
    unsigned short flag; /* 0x8 */
} Entry_8285F548;

typedef struct Settings_8285F548 {
    int pad0;
    void *context; /* 0x4 */
    char pad8[0x8];
    unsigned int kind;       /* 0x10 */
    unsigned char mask[0xc]; /* 0x14 */
    float scale;             /* 0x20 */
    float low[3];            /* 0x24 */
    float high[3];           /* 0x30 */
    char pad3c[0x8];
    unsigned int count; /* 0x44 */
    int pad48;
    void *table; /* 0x4c */
} Settings_8285F548;

extern Settings_8285F548 lbl_832115D0;

extern void *fn_82862338(void *table, void *context, unsigned int index);
extern Entry_8285F548 *fn_82862150(void *item, void *context);
extern int fn_827EB1A8(int target, unsigned char flag, unsigned char *bits, unsigned char *mask, float scale,
                       unsigned char *format);
extern int fn_827EB3B8(int target, unsigned char flag, unsigned char *bits, float *low, float *high,
                       unsigned char *format);

static __forceinline int Convert(int target, int flag, unsigned char *bits, unsigned char *format)
{
    switch (lbl_832115D0.kind) {
    case 0:
        return fn_827EB1A8(target, flag, bits, lbl_832115D0.mask, lbl_832115D0.scale, format);
    case 1:
        return fn_827EB3B8(target, flag, bits, lbl_832115D0.low, lbl_832115D0.high, format);
    }
    return 0;
}

int fn_8285F548(unsigned char *bits, unsigned char *enabled, unsigned char *format)
{
    unsigned char bit = 0x80;
    unsigned int i = 0;
    void *item;
    Entry_8285F548 *entry;
    int result;

    for (; i < lbl_832115D0.count; i++) {
        if (*enabled & bit) {
            item = fn_82862338(lbl_832115D0.table, lbl_832115D0.context, i);
            entry = fn_82862150(item, lbl_832115D0.context);
            result = Convert(entry->target, entry->flag, bits + i, format + i);
            if (result == 2) {
                return 1;
            }
            if (result == 0) {
                *enabled &= ~bit;
            }
        }
        bit >>= 1;
        if (bit == 0) {
            enabled++;
            bit = 0x80;
        }
    }
    return 0;
}
