typedef struct Entry_826B14D8 {
    int key;            /* 0x0 */
    unsigned int value; /* 0x4 */
} Entry_826B14D8;

typedef struct Object_826B14D8 {
    char pad0[0x8];
    unsigned int slots[(0x278 - 0x8) / 4]; /* 0x008 */
    char hash[0x8];                        /* 0x278 */
} Object_826B14D8;

extern Entry_826B14D8 *fn_826AF898(void *hash, int *key);
extern void fn_826B1330(Object_826B14D8 *self, unsigned int *slot);

static __forceinline unsigned int *Find(void *hash, int *key)
{
    Entry_826B14D8 *entry = fn_826AF898(hash, key);
    return entry ? &entry->value : 0;
}

/* The key is passed by reference and still read from a register afterwards:
   exact only when compiled together with the lookup and its callee. */
unsigned int fn_826B14D8(Object_826B14D8 *self, int id)
{
    unsigned int *value = Find(self->hash, &id);
    if (value == 0) {
        fn_826B1330(self, &self->slots[id]);
        value = Find(self->hash, &id);
    }
    if (value != 0) {
        return *value;
    }
    return 0;
}
