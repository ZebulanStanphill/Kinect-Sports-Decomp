typedef struct Slot_823D6410 {
    unsigned char data[0x30]; /* 0x00 */
    int state;                /* 0x30 */
    int priority;             /* 0x34 */
    unsigned char pad38[8];
} Slot_823D6410;

typedef struct Entry_823D6410 {
    unsigned int index; /* 0x00 */
    int priority;       /* 0x04 */
} Entry_823D6410;

typedef struct Manager_823D6410 {
    Slot_823D6410 slots[14]; /* 0x000 */
    unsigned char pad380[0x3b8 - 0x380];
    unsigned int mask; /* 0x3b8 */
} Manager_823D6410;

extern void *memcpy(void *dest, const void *src, unsigned int count);
extern Slot_823D6410 *fn_823D6368(Slot_823D6410 *slot);
extern void fn_823D6F20(Entry_823D6410 *first, Entry_823D6410 *last, int count,
                        int (*less)(const Entry_823D6410 *, const Entry_823D6410 *));
extern int fn_823D63F8(const Entry_823D6410 *a, const Entry_823D6410 *b);
extern void fn_823D6528(Manager_823D6410 *self, unsigned int index, Entry_823D6410 *entries,
                        unsigned int position);

static __forceinline void SortEntries(Entry_823D6410 *first, Entry_823D6410 *last)
{
    fn_823D6F20(first, last, last - first, fn_823D63F8);
}

void fn_823D6410(Manager_823D6410 *self)
{
    Entry_823D6410 entries[14];
    Slot_823D6410 empty;
    unsigned int count;
    unsigned int i;
    int j;

    self->mask = 0xffffffff;
    for (j = 0; j < 14; j++) {
        entries[j].index = 0;
        entries[j].priority = 0;
    }
    count = 0;
    for (i = 0; i < 14; i++) {
        switch (self->slots[i].state) {
        case 1:
            self->slots[i] = *fn_823D6368(&empty);
            break;
        case 2:
            if ((1 << i) & self->mask) {
                entries[count].index = i;
                entries[count].priority = self->slots[i].priority;
                count++;
            }
            self->slots[i].state = 1;
            break;
        }
    }
    if (count != 0) {
        SortEntries(entries, entries + count);
        for (i = 1; i < count; i++) {
            fn_823D6528(self, entries[i].index, entries, i);
        }
    }
}
