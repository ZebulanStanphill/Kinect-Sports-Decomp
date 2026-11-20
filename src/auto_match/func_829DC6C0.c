typedef struct Range_829DC6C0 {
    float minimum; /* 0x00 */
    float maximum; /* 0x04 */
    float scale;   /* 0x08 */
    float unused;  /* 0x0c */
    float offset;  /* 0x10 */
} Range_829DC6C0;

typedef struct Settings_829DC6C0 {
    char pad0[0x8f054];
    Range_829DC6C0 low;  /* 0x8f054 */
    Range_829DC6C0 high; /* 0x8f068 */
    int pad8f07c;
    unsigned int threshold; /* 0x8f080 */
} Settings_829DC6C0;

extern Settings_829DC6C0 *lbl_832179FC;

void fn_829DC6C0(unsigned int value, float *minimum, float *maximum, float *scale, float *offset)
{
    if (value > lbl_832179FC->threshold) {
        *minimum = lbl_832179FC->high.minimum;
        *maximum = lbl_832179FC->high.maximum;
        *scale = lbl_832179FC->high.scale;
        *offset = lbl_832179FC->high.offset;
    } else {
        *minimum = lbl_832179FC->low.minimum;
        *maximum = lbl_832179FC->low.maximum;
        *scale = lbl_832179FC->low.scale;
        *offset = lbl_832179FC->low.offset;
    }
}
