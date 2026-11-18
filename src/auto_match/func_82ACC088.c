typedef struct Use_82ACC088 {
    char pad0[8];
    unsigned int : 5;
    unsigned int counted : 1; /* 0x08 */
    unsigned int : 26;
    int padc;
    unsigned int : 1;
    unsigned int bank : 4; /* 0x10 */
    unsigned int : 27;
    unsigned int index : 7; /* 0x14 */
    unsigned int : 25;
    char pad18[0x10];
    unsigned int next; /* 0x28, tagged: bit 0 ends the list */
} Use_82ACC088;

typedef struct Value_82ACC088 {
    char pad0[0x1c];
    unsigned int uses; /* 0x1c, tagged */
} Value_82ACC088;

typedef struct Entry_82ACC088 {
    char pad0[0x18];
    unsigned int hash;           /* 0x18 */
    struct Entry_82ACC088 *next; /* 0x1c */
} Entry_82ACC088;

typedef struct Compiler_82ACC088 {
    char pad0[0x2c8];
    Entry_82ACC088 **table; /* 0x2c8 */
    unsigned int count;     /* 0x2cc */
    int pad2d0;
    int *useCounts; /* 0x2d4 */
    char pad2d8[0xf4];
    char pool[4]; /* 0x3cc */
} Compiler_82ACC088;

extern void fn_82ACBFC0(Compiler_82ACC088 *self, Entry_82ACC088 *entry);
extern void *fn_82ABE8C8(void *pool, unsigned int size);

static __forceinline Use_82ACC088 *First(Value_82ACC088 *value)
{
    if (value->uses & 1) {
        return 0;
    }
    return (Use_82ACC088 *)value->uses;
}

static __forceinline Use_82ACC088 *Next(Use_82ACC088 *use)
{
    unsigned int p = ((Use_82ACC088 *)((unsigned int)use & ~1u))->next;

    if (p & 1) {
        return 0;
    }
    return (Use_82ACC088 *)p;
}

int fn_82ACC088(Compiler_82ACC088 *self, Entry_82ACC088 *entry, Value_82ACC088 *value)
{
    unsigned int bucket;
    Use_82ACC088 *use;

    if (entry->hash == 0) {
        fn_82ACBFC0(self, entry);
    }
    bucket = entry->hash % 0x3e5;
    if (self->table == 0) {
        self->table = (Entry_82ACC088 **)fn_82ABE8C8(self->pool, 0xf94);
    }
    entry->next = self->table[bucket];
    self->table[bucket] = entry;
    if (++self->count > 0x61a8) {
        return 0;
    }
    for (use = First(value); use != 0; use = Next(use)) {
        if ((unsigned char)use->counted) {
            self->useCounts[(use->bank << 7 | use->index) - 1]++;
        }
    }
    return 1;
}
