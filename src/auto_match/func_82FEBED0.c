extern void *memset(void *dst, int value, unsigned int size);

typedef struct Config_82FEBED0 {
    unsigned int enabled; /* 0x0 */
    unsigned int countA;  /* 0x4 */
    unsigned int sizeA;   /* 0x8 */
    unsigned int flags;   /* 0xc */
    unsigned int countB;  /* 0x10 */
    unsigned int sizeB;   /* 0x14 */
    unsigned int limit;   /* 0x18 */
    float scale;          /* 0x1c */
} Config_82FEBED0;

extern Config_82FEBED0 lbl_832643B4;

void fn_82FEBED0(Config_82FEBED0 *config)
{
    if (config == 0) {
        memset(&lbl_832643B4, 0, sizeof(lbl_832643B4));
        lbl_832643B4.enabled = 1;
        lbl_832643B4.countA = 4;
        lbl_832643B4.sizeA = 0x2000;
        lbl_832643B4.scale = 1.0f;
        lbl_832643B4.flags = 0;
        lbl_832643B4.countB = 4;
        lbl_832643B4.sizeB = 0x2000;
        lbl_832643B4.limit = 0x1000000;
        return;
    }
    lbl_832643B4 = *config;
    *config = lbl_832643B4;
}
