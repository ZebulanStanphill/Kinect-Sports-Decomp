extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct {
    unsigned int key;
    unsigned int value[3];
} Entry_826DBC20;

extern Entry_826DBC20 *fn_826D97A0(void *table, const unsigned int *key);

typedef struct {
    char pad0[0x74];
    int lockLevel;          /* 0x74 */
    char pad78[0xac - 0x78];
    char cs[0x24];          /* 0xac */
    void *table;            /* 0xd0 */
} Map_826DBC20;

typedef struct {
    char pad0[0x20];
    Map_826DBC20 *map;
} Inner_826DBC20;

typedef struct {
    char pad0[0xc];
    Inner_826DBC20 *inner;
} Outer_826DBC20;

typedef struct {
    char pad0[0x1c];
    Outer_826DBC20 *outer;
} Self_826DBC20;

static __forceinline unsigned int *Lookup(Map_826DBC20 *map, const unsigned int *key)
{
    Entry_826DBC20 *e = fn_826D97A0(&map->table, key);
    return e ? e->value : 0;
}

unsigned int *fn_826DBC20(Self_826DBC20 *self, const unsigned int *key)
{
    Map_826DBC20 *locked = 0;
    Map_826DBC20 *map = self->outer->inner->map;
    unsigned int *result;

    if (map->lockLevel < 2) {
        locked = map;
        RtlEnterCriticalSection(map->cs);
    }
    result = Lookup(self->outer->inner->map, key);
    if (locked != 0)
        RtlLeaveCriticalSection(locked->cs);
    return result;
}
