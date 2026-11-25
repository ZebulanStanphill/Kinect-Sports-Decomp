typedef struct Entry_82994768 {
    int pad0;
    unsigned int group; /* 0x4 */
    int pad8;
    unsigned int index; /* 0xc */
} Entry_82994768;

typedef struct Table_82994768 {
    char pad0[0x8];
    int *ids; /* 0x08 */
    int padc;
    int *slots; /* 0x10 */
    char pad14[0x60];
} Table_82994768;

typedef struct Owner_82994768 {
    char pad0[0x8];
    unsigned int entryCount; /* 0x08 */
    char padc[0x8];
    Entry_82994768 **entries; /* 0x14 */
    char pad18[0x70];
    unsigned int group; /* 0x88 */
    char pad8c[0x78];
    Table_82994768 *table; /* 0x104 */
} Owner_82994768;

extern int fn_82964628(Owner_82994768 *owner, unsigned int group, unsigned int index, unsigned int slot,
                       double weight);
extern void *fn_82963998(unsigned int size);
extern Table_82994768 *fn_829632A0(void *mem);
extern int fn_82963A30(Table_82994768 *table, unsigned int flags, unsigned int a, unsigned int b, int c);
extern int fn_829632F0(Table_82994768 *table, Table_82994768 *source);
extern void fn_82BA02A8(Table_82994768 *table);
extern void fn_829639F0(Table_82994768 *table);

static __forceinline void Release_82994768(Table_82994768 *table)
{
    if (table != 0) {
        fn_82BA02A8(table);
        fn_829639F0(table);
    }
}

int fn_82994768(Owner_82994768 *self, Table_82994768 **out, unsigned int count)
{
    unsigned int next;
    unsigned int i;
    int ids[4];
    void *mem;
    Table_82994768 *table;
    int hr;

    next = 0;
    for (i = 0; i < self->entryCount; i++) {
        if (self->group == self->entries[i]->group && self->entries[i]->index >= next) {
            next = self->entries[i]->index + 1;
        }
    }
    for (i = 0; i < 4; i++) {
        ids[i] = fn_82964628(self, self->group, next, i, 0.0);
        if (ids[i] == -1) {
            return 0x8007000e;
        }
    }
    mem = fn_82963998(0x74);
    if (mem != 0) {
        table = fn_829632A0(mem);
    } else {
        table = 0;
    }
    *out = table;
    if (table == 0) {
        return 0x8007000e;
    }
    hr = fn_82963A30(table, (count & 0xfffff) | 0x10000000, count, count, 0);
    if (hr < 0) {
        Release_82994768(*out);
        return hr;
    }
    hr = fn_829632F0(*out, self->table);
    if (hr < 0) {
        Release_82994768(*out);
        return hr;
    }
    for (i = 0; i < count; i++) {
        (*out)->ids[i] = ids[i];
        (*out)->slots[i] = self->table->slots[i];
        self->table->slots[i] = ids[i];
    }
    return 0;
}
