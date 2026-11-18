typedef struct Entry_82E38A90 {
    unsigned int key;      /* 0x00 */
    unsigned short subKey; /* 0x04 */
    unsigned short pad6;
    void *first;  /* 0x08 */
    void *second; /* 0x0c */
} Entry_82E38A90;

/* Three lookup tables reached through one base address. */
typedef struct Tables_82E38A90 {
    Entry_82E38A90 table30[30]; /* 0x0000 */
    char gap1e0[0x15f8];
    Entry_82E38A90 table22[22]; /* 0x17d8 */
    char gap1938[0x908];
    Entry_82E38A90 table11[11]; /* 0x2240 */
} Tables_82E38A90;

extern const Tables_82E38A90 lbl_82150C20;

const Entry_82E38A90 *fn_82E38A90(void *self, int secondary, int primary, unsigned int key,
                                  unsigned int subKey)
{
    const Entry_82E38A90 *table;
    unsigned int count;
    unsigned int i;

    if (primary != 0) {
        if (secondary != 0) {
            count = 11;
            table = lbl_82150C20.table11;
        } else {
            count = 22;
            table = lbl_82150C20.table22;
        }
    } else {
        count = 30;
        table = lbl_82150C20.table30;
    }
    for (i = 0; i < count; i++) {
        if (table[i].key == key && table[i].subKey == subKey) {
            if (table[i].second != 0 && table[i].first != 0) {
                return &table[i];
            }
            return 0;
        }
    }
    return 0;
}
