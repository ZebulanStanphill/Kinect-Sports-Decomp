typedef struct Values_82FF7628 {
    unsigned int *begin;    /* 0x0 */
    unsigned int *end;      /* 0x4 */
    unsigned int *capacity; /* 0x8 */
} Values_82FF7628;

typedef struct Entry_82FF7628 {
    struct Entry_82FF7628 *next; /* 0x0 */
    Values_82FF7628 values;      /* 0x4 */
    unsigned int key;            /* 0x10 */
} Entry_82FF7628;

extern Entry_82FF7628 *fn_82FF7548(void *registry, unsigned int key, int which);
extern unsigned int *fn_82FF7DB0(Values_82FF7628 *values);
extern int fn_82FF6128(Entry_82FF7628 *entry, unsigned int value, unsigned char add);

static __forceinline void RemoveValue(Values_82FF7628 *values, unsigned int *slot)
{
    if ((unsigned int)(values->end - values->begin) > 1) {
        *slot = values->end[-1];
    }
    values->end--;
}

int fn_82FF7628(void *registry, int which, unsigned int key, unsigned int value, unsigned char add)
{
    Entry_82FF7628 *entry;
    Values_82FF7628 *values;
    unsigned int *slot;
    unsigned int *end;
    unsigned int *added;
    int hr;

    entry = fn_82FF7548(registry, key, which);
    if (entry == 0) {
        return add ? 0x34 : 1;
    }
    values = &entry->values;
    end = values->end;
    for (slot = values->begin; slot != end && *slot != value; slot++) {
    }
    if (slot != values->end) {
        if (add) {
            return 1;
        }
        RemoveValue(values, slot);
    } else {
        if (!add) {
            return 1;
        }
        added = fn_82FF7DB0(values);
        if (added != 0) {
            *added = value;
        }
    }
    hr = fn_82FF6128(entry, value, add);
    if (hr != 1) {
        RemoveValue(values, slot);
    }
    return hr;
}
