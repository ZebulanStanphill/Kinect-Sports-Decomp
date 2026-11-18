typedef struct Owner_82DF02D0 {
    char unknown00[0x34];
    unsigned int *keys; /* 0x34 */
    int numKeys;        /* 0x38 */
} Owner_82DF02D0;

/* hkMemUtil::memCpyOneAligned for a 4-byte element: a loop over its words. */
static __forceinline void memCpyOneAligned(void *dst, const void *src)
{
    unsigned int k;

    for (k = 0; k < 1; k++) {
        ((unsigned int *)dst)[k] = ((const unsigned int *)src)[k];
    }
}

/* Removes the key by moving the last one into its place; *out says whether it was found. */
void fn_82DF02D0(unsigned char *out, Owner_82DF02D0 *self, unsigned int key)
{
    int i;
    int last;
    int *numKeys;
    unsigned int *entry;

    if (key != 0) {
        i = 0;
        if (0 < self->numKeys) {
            entry = self->keys;
            do {
                if (*entry == key) {
                    numKeys = &self->numKeys;
                    last = *numKeys - 1;
                    *numKeys = last;
                    if (last != i) {
                        memCpyOneAligned(self->keys + i, self->keys + last);
                    }
                    *out = 1;
                    return;
                }
                i++;
                entry++;
            } while (i < self->numKeys);
        }
    }
    *out = 0;
}
