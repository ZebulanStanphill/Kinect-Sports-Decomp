typedef struct Entry_82F724D8 {
    const void *vt; /* 0x00 */
    int value;      /* 0x04 */
    int flags;      /* 0x08 */
} Entry_82F724D8;

extern const char lbl_82169D70[];
extern unsigned int lbl_8326360C;
extern Entry_82F724D8 lbl_832635DC[4];

static __forceinline Entry_82F724D8 *Construct(Entry_82F724D8 *entry, int value, int flags)
{
    entry->vt = lbl_82169D70;
    entry->value = value;
    entry->flags = flags;
    return entry;
}

Entry_82F724D8 *fn_82F724D8(int index)
{
    if ((lbl_8326360C & 1) == 0) {
        lbl_8326360C |= 1;
        Construct(&lbl_832635DC[0], 0, 0);
        Construct(&lbl_832635DC[1], 1, 4);
        Construct(&lbl_832635DC[2], 2, 0);
        Construct(&lbl_832635DC[3], 3, 0);
    }
    if (index >= 0 && index < 4) {
        return &lbl_832635DC[index];
    }
    return &lbl_832635DC[3];
}
