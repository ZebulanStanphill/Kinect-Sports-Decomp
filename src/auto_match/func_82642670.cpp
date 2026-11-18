typedef struct Entry_82642670 {
    unsigned int kind : 6; /* 0x0, bits 31-26 */
    unsigned int value : 26;
    unsigned int data;         /* 0x4 */
    unsigned int reserved : 3; /* 0x8 */
    unsigned int count : 4;
    unsigned int flag : 1;
    unsigned int extra : 24;
} Entry_82642670;

typedef struct Table_82642670 {
    char pad0[0x14];
    unsigned int flags; /* 0x14 */
    int base18;         /* 0x18 */
    int base1c;         /* 0x1c */
    char pad20[0x24 - 0x20];
    unsigned int links[1]; /* 0x24 */
} Table_82642670;

extern "C" void *memcpy(void *dst, const void *src, unsigned int size);

extern "C" void fn_82642670(Table_82642670 *table, Entry_82642670 *entries, unsigned short *key)
{
    unsigned int *link;
    Entry_82642670 *entry;
    Entry_82642670 blank = {};

    link =
        (unsigned int *)(((table->flags >> 5 & 0x1f) + (*key & 0xfff) + table->base1c + table->base18 + 9) *
                             4 +
                         (int)table);
    blank.count = 1;
    blank.flag = 0;
    blank.kind = 0x32;
    for (;;) {
        entry = &entries[*link & 0xfff];
        if (entry != &blank) {
            memcpy(entry, &blank, 0xc);
        }
        if ((*link & 0x1000) != 0) {
            break;
        }
        link++;
    }
}
