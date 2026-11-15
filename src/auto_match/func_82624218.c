typedef struct Selection_82624218 {
    char reserved[8];   /* 0x00 */
    unsigned int index; /* 0x08 */
    char padding[0x10]; /* 0x0c */
    float scale;        /* 0x1c */
} Selection_82624218;

typedef struct Entry_82624218 {
    char padding[0x10]; /* 0x00 */
    float value;        /* 0x10 */
} Entry_82624218;

typedef struct Table_82624218 {
    char padding[0x10];         /* 0x00 */
    float scale;                /* 0x10 */
    char padding14[0x84];       /* 0x14 */
    Entry_82624218 *entries[5]; /* 0x98 */
} Table_82624218;

extern Selection_82624218 lbl_83274AE0;
extern Table_82624218 lbl_8326B850;
extern unsigned int lbl_831E7984[];

int fn_82624218(void)
{
    unsigned int selected = lbl_83274AE0.index;
    unsigned int index = lbl_831E7984[selected];
    float scale = lbl_83274AE0.scale;
    Entry_82624218 *entry;
    int hasScale;
    hasScale = scale != 0.0f;
    if (hasScale) {
        entry = lbl_8326B850.entries[index];
    } else {
        entry = lbl_8326B850.entries[lbl_831E7984[selected]];
        scale = lbl_8326B850.scale;
    }
    return (int)(entry->value * scale);
}
