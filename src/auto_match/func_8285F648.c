typedef struct Settings_8285F648 {
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
} Settings_8285F648;

extern Settings_8285F648 lbl_832115D0;

extern int fn_8285F548(unsigned char *bits, unsigned char *enabled, unsigned char *format);

int fn_8285F648(unsigned char *bits, unsigned char *format)
{
    return fn_8285F548(bits + 1, bits + 1 + lbl_832115D0.count, format + 1);
}
